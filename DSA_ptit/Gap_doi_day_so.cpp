#include <iostream>
#include <vector>
using namespace std;
#define ll long long
const int mod = 123456789;



ll pow1(ll n, ll k){
    if(k == 0) return 1;
    if(k % 2 == 1){
        return pow1(n, k/2)  * pow1(n, k/2)  * n ;
    }else{
        return pow1(n, k/2) * pow1(n, k/2) ;
    }
}

ll solve(ll n, ll k){
    if(k % 2 == 1) return 1;
    ll mid = (ll)pow1(2, n - 1);
    if(k == mid) return n;
    if(k < mid) return solve(n - 1, k);
    return solve(n - 1, k - mid);
}

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        cout << solve(n, k) << endl;
    }
    return 0;
}