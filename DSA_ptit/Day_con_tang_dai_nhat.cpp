#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n; cin >> n;
    int a[n];
    int f[n];
    int ans = 0;
    for(int i=0 ;i<n ; i++)
    {
        cin >> a[i];
        f[i] = 1;
    } 
    
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<i ; j++)
        {
            if(a[i] > a[j])
            {
                f[i] = max(f[i], f[j] + 1);
                ans = max(ans, f[i]);
            }
        }
    }
    cout << ans << endl;
    return 0;
}