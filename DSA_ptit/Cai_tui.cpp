#include<bits/stdc++.h>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--)
    {
        int n, v; cin >> n >> v;
        int a[n + 1], c[n + 1];
        for(int i=1 ; i<=n ; i++) cin >> a[i];
        for(int i=1 ; i<=n ; i++) cin >> c[i];
        int f[n + 1][v + 1];
        memset(f, 0, sizeof(f));
        for(int i=1 ; i<=n ; i++)
        {
            for(int j=0 ; j<=v ; j++)
            {
                f[i][j] = f[i-1][j];
                if(j >= a[i])
                {
                    f[i][j] = max(f[i][j], f[i - 1][j - a[i]] + c[i]);
                }
            }
        }
        cout << f[n][v] << endl;
    }
    
    return 0;
}