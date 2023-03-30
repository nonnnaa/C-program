#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        map<char, int> mp;
        int ans = 0;
        for(int i=0 ; i<s.size() ;i++){
            mp[s[i]]++;
            ans = max(mp[s[i]], ans);
        }
        if(n * ans <= s.size() + 1){
            cout << 1 << endl;
        }else cout << -1 << endl;
    }
    cout << endl;
}