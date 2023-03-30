#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include<cstring>
#include<queue>
#include<set>
#include<map>

using namespace std;

const int mod = 1e9 + 7;

int cnt[5];
int solve(int x, int b[], int m)
{

    if(x == 0) return 0;
    if(x == 1){
        return cnt[0];
    } 
    int dem = cnt[0] + cnt[1];
    auto it = upper_bound(b, b+m, x);
    if(it != b + m)
    {
        dem += (b + m) - it;
    }
    if(x == 2)
    {
        dem -= (cnt[3] + cnt[4]);
    }
    if(x == 3)
    {
        dem += cnt[2];
    }
    return dem;
}


int main()
{
    //freopen("input.txt", "r", stdin);
    int t; cin >> t;
    while(t--)
    {
        memset(cnt, 0, sizeof(cnt));
        int n, m; cin >> n >> m;
        int a[n], b[m];
        for(int &x : a) cin >> x;
        for(int &x : b)
        {
            cin >> x;
            if(x < 5)
            {
                cnt[x]++;
            }
        } 

        sort(b , b + n);
        int ans;
        for(int x : a)
        {
            ans += solve(x, b, m);
        }
        cout << ans << endl;
    }

    return 0;
}