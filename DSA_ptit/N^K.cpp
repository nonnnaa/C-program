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
int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        cout << pow1(n, k) << endl;
    }
    return 0;
}