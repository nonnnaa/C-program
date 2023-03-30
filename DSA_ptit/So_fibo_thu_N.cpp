#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
struct matrix
{
    ll a[2][2];
    matrix operator * (matrix x)
    {
        matrix res;
        for(int i=0 ; i<2 ; i++)
        {
            for(int j=0 ; j<2 ; j++)
            {
                res.a[i][j] = 0;
                for(int k=0 ; k<2 ; k++)
                {
                    res.a[i][j] += a[i][k] * x.a[k][j];
                    res.a[i][j] %= mod;
                }
            }
        }
        return res;
    }
};

matrix powmod(matrix a, ll n)
{
    if(n == 1) return a;
    matrix res = powmod(a, n/2);
    if(n % 2 == 0)
    {
        return res * res;
    }
    else
    {
        return res * res * a;
    }
}

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        matrix res;
        res.a[0][0] = 1;
        res.a[0][1] = 1;
        res.a[1][0] = 1;
        res.a[1][1] = 0;
        matrix ans = powmod(res, n);
        cout << ans.a[0][1] << endl;
    }
    return 0;
}