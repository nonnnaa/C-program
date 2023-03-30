#include <bits/stdc++.h>
using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // int t; cin >> t;
    // while(t--){
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        sort(a, a+n);
        cout << max({(a[0] * a[1] * a[n-1]), (a[0] * a[1] * a[2]), (a[n-1] * a[n-2] * a[0]), (a[n-1] * a[n-2] * a[n-3])});
    //}
}