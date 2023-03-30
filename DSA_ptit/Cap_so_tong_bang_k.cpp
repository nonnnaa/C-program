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
#define ll unsigned long long
const int mod = 1e9 + 7;


ll c[100][100];


void init()
{
    for(int i=0 ; i<=20 ; i++)
    {
        for(int j=0 ; j<=i ; j++)
        {
            if(j == 0 || j == i)
            {
                c[i][j] = 1;
            }
            else
            {
                c[i][j] = c[i-1][j-1] + c[i-1][j];
            }
        }
    }
}

int main()
{
    //freopen("input.txt", "r", stdin);
    init();
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int a[n];
        map<int, int> mp;
        for(int &x : a){
            cin >> x;
            mp[x]++;
        } 
        int ans = 0;
        for(int x : a)
        {
            ans += mp[k - x];
            if(x * 2 == k)
                ans--;
        }
        cout << ans/2 << endl;
    }
    return 0;
}