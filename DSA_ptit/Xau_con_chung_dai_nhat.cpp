#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--)
    {
        string a, b; cin >> a >> b;
        int n = a.size(), m = b.size();
        int f[n + 1][m + 1];
        memset(f, 0, sizeof(f));
        for(int i=1 ; i<=n ; i++)
        {
            for(int j=1 ; j<=m; j++)
            {
                if(a[i - 1] == b[j - 1])
                {
                    f[i][j] = f[i - 1][j - 1] + 1;
                }
                else
                {
                    f[i][j] = max(f[i - 1][j], f[i][j - 1]);
                }  
            }
        }
        cout << f[n][m] << endl;
    }
    return 0;
}