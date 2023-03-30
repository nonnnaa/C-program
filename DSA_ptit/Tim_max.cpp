#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
const int maxN = 1e7 + 1;
const int mod = 1e9 + 7;
int a[maxN];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        ll ans = 0;
        for(int i=0 ; i<n ; i++){
            ans += ((a[i] * i) % mod);
            ans %= mod;
        }
        cout << ans << endl;
    }
    return 0;
}
