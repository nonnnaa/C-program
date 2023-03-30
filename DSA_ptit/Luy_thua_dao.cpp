#include <iostream>
#include <vector>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

ll pow1(ll n, ll k){
    if(k == 0) return 1;
    if(k % 2 == 1){
        return pow1(n, k/2) % mod * pow1(n, k/2) % mod * n % mod;
    }else{
        return pow1(n, k/2) % mod * pow1(n, k/2) % mod;
    }
}
ll Reverse(ll n){
    ll res = 0;
    while(n){
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}
int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        cout << pow1(n, Reverse(n)) << endl;
    }
    return 0;
}