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
        int n, s; cin >> n >> s;
        int a[n];
        for(int &x : a) cin >> x;
        bool f[s + 1];
        memset(f, false, sizeof(f));
        f[0] = true;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=s ; j>=a[i] ; j--)
            {
                if(f[j - a[i]] == true)
                {
                    f[j] = true;
                }
            }
        }
        if(f[s] == true) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}