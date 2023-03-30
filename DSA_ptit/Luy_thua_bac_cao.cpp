#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

ll powmod(ll a, ll b)
{
    if(b == 0) return 1;
    ll res = powmod(a, b/2);
    if(b % 2 == 0)
    {
        return (res % mod) * (res % mod) % mod;
    }
    else
    {
        return ((res % mod) * (res % mod) % mod) * a % mod;
    }
}

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
    while(true)
    {
        ll a, b;
        cin >> a >> b;
        if(a == 0 && b == 0) return 0;
        cout << powmod(a, b) << endl;
    }
    return 0;
}