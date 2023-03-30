#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int c, n; cin >> c >> n;
    int w[n];
    for(int &x : w) cin >> x;
    bool f[c + 1];
    memset(f, false, sizeof(f));
    f[0] = true;
    for(int i=0 ; i<n ; i++)
    {
        for(int j = c ; j >= w[i] ; j--)
        {
            if(f[j - w[i]])
            {
                f[j] = true;
            }
        }
    }
    for(int i=c; i>=0 ; i--)
    {
        if(f[i])
        {
            cout << i;
            return 0;
        }
    }
}