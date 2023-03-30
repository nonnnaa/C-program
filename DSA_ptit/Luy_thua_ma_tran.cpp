#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int n, k;
struct matrix
{
    ll f[11][11];
    friend istream& operator >> (istream &in, matrix &x)
    {
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                in >> x.f[i][j];
            }
        }
        return in;
    }
    friend ostream& operator << (ostream &out, matrix x)
    {
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                out << x.f[i][j] << ' ';
            } 
            out << endl;
        }
        return out;
    }
    friend matrix operator * (matrix a, matrix b)
    {
        matrix res;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                res.f[i][j] = 0;
                for(int k=0 ; k<n ; k++)
                {
                    res.f[i][j] += a.f[i][k] * b.f[k][j]; 
                    res.f[i][j] %= mod;
                }
            }
        }
        return res;
    }
};
matrix powmod(matrix a, int k)
{
    if(k == 1) return a;
    matrix tmp = powmod(a, k/2);
    if(k % 2 == 1){
        return tmp  * tmp  * a ;
    }else{
        return tmp * tmp ;
    }
}


int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> k;
        matrix x; cin >> x;
        matrix res = powmod(x, k);
        ll ans = 0;
        for(int i=0 ; i<n ; i++)

        {
            ans += res.f[i][n - 1];
            ans %= mod;
        }
        cout << ans << endl;
    }
    return 0;
}