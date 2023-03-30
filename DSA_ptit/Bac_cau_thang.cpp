#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include<cstring>
#define ll unsigned long long
using namespace std;
const int mod = 1e9 + 7;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int f[n + 1];
        memset(f, 0, sizeof(f));
        f[0] = 1;
        for(int i=1 ; i<=n ; i++)
        {
            for(int j=1 ; j<=min(k, i) ; j++)
            {
                f[i] += f[i - j];
                f[i] %= mod;
            }
        }
        cout << f[n] << endl;
        
    }
    return 0;
}