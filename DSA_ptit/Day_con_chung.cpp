#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        int n, m, k; cin >> n >> m >> k;
        int a[n], b[m], c[k];
        map<int, int> mp1, mp2, mp3;

        for(int &x : a){
            cin >> x;
            mp1[x]++;
        } 
        for(int &x : b){
            cin >> x;
            mp2[x]++;
        } 
        for(int &x : c){
            cin >> x;
            mp3[x]++;
        } 
        bool ok = false;
        for(auto p : mp1){
            int x = p.first;
            if(mp3[x] && mp2[x]){
                ok = true;
                for(int i=1 ; i<=min({mp1[x], mp2[x], mp3[x]}) ; i++){
                    cout << x << ' ';
                }
            }
        }
        if(!ok) cout << "NO";
        cout << endl;
    }
    return 0;
}