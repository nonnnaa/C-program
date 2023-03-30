#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}

int main () {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<pair<int, int>> v;
        int a[n], b[n];
        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;
        for(int i=0 ; i<n ; i++){
            v.push_back({a[i], b[i]});
        }
        sort(v.begin(), v.end(), cmp);
        int ans = v[0].second;
        int cnt = 1;
        for(int i = 1 ; i<v.size() ; i++){
            if(ans <= v[i].first){
                ans = v[i].second;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}