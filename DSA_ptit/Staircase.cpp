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
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        ll f[n + 1];
        memset(f, 0, sizeof(f));
        f[0] = f[1] = 1;
        for(int i=2 ; i<=n ; i++)
        {
            for(int j=1 ; j<=min(i, 3) ; j++)
            {
                f[i] += f[i - j];
            }
        }
        cout << f[n] << endl;
    }
    return 0;
}