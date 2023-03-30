#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<pair<int, int>> v;
        for(int i=0 ; i<n ; i++){
            int x, y; cin >> x >> y;
            v.push_back({x, y});
        }
        sort(v.begin(), v.end(), cmp);
        int time = v[0].second, ans = 1;
        for(int i=1 ; i<n ; i++){
            if(time <= v[i].first){
                ++ans;
                time = v[i].second;
            }
        }
        cout << ans << endl;
    }
}