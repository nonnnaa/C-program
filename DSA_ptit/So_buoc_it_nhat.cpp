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
        for(int &x : a) cin >> x;
        int b[n] = {0};
        for(int i=0 ; i<n ;i++){
            b[i] = 1;
            for(int j=0 ; j<i ; j++){
                if(a[i] > a[j]){
                    b[i] = max(b[i], b[j] + 1);
                }
            }
        }
        cout << n - *max_element(b, b + n);
    }
    return 0;
}