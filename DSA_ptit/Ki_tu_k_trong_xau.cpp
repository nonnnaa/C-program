#include <bits/stdc++.h>
using namespace std;
#define ll long long

char solve(ll n, ll k)
{
    if(k % 2 == 1)
    {
        return 'A';
    }
    ll m = (ll)pow(2, n-1);
    if(k == m)
    {
        return (64 + n);
    }
    if(k < m)
    {
        return solve(n - 1, k);
    }
    else
    {
        return solve(n - 1, k - m);
    }
}

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
    int t; cin >> t;
    while(t--)
    {
        ll n, k; cin >> n >> k;
        cout << solve(n, k) << endl;
    }
    return 0;
}