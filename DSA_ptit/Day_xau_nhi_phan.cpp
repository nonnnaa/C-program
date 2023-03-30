#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll f[100];
void fibo()
{
    f[1] = f[2] = 1;
    for(int i=3 ; i<93 ; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }
}

ll solve(ll n, ll k)
{
    if(n == 1)
    {
        return 0;
    }
    if(n == 2)
    {
        return 1;
    }
    if(k <= f[n-2])
    {
        return solve(n-2, k);
    }
    else
    {
        return solve(n-1, k - f[n-2]);
    }
}

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    fibo();
    int t; cin >> t;
    while(t--)
    {
        ll n, k; cin >> n >> k;
        cout << solve(n, k) << endl;
    }
    return 0;
}