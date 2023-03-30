#include <bits/stdc++.h>
using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        int n, s, m; 
        cin >> n >> s >> m;
        if(s * m > n * (s - s/7)){
            cout << -1 << endl;
        }else{
            for(int i=1 ; i<=(s - s/7) ; i++){
                if(n * i >= s * m){
                    cout << i << endl;
                    break;
                }
            }
        }
    }
}