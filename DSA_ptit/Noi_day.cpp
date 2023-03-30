#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        priority_queue<ll, vector<ll> , greater<ll>> q;
        for(int i=0 ; i<n ; i++){
            int x; cin >> x;
            q.push(x);
        }
        ll ans = 0;
        while(q.size() > 1){
            ll res1 = q.top();
            q.pop();
            ll res2 = q.top();
            q.pop();
            ans += res1 + res2;
            q.push(res1 + res2);
        }
        cout << ans << endl;
    }
    return 0;
}