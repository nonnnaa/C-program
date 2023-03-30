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
        int a[n];
        int sum = 0;
        for(int &x : a)
        {
            cin >> x;
            sum += x;
        } 
        if(sum % 2 == 1)
        {
            cout << "NO\n";
            continue;
        }
        sum = sum /2;
        bool f[sum + 1];
        memset(f, false, sizeof(f));
        f[0] = true;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=sum ; j>=a[i] ; j--)
            {
                if(f[j - a[i]] == true)
                {
                    f[j] = true;
                }
            }
        }
        if(f[sum] == true) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}