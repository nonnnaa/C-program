#include<bits/stdc++.h>
using namespace std;

int n;
bool ok;
int a[101][101];
int dx[] = {1, 0};
int dy[] = {0, 1};
string s;

void Try(int i, int j){
    if(i == n && j == n){
        ok = true;
        cout << s << " ";
    }
    for(int z = 0 ; z < 2 ; z++){
        int i1 = i + dx[z];
        int j1 = j + dy[z];
        if(i1 > 0 && i1 <= n && j1 > 0 && j1 <= n && a[i1][j1] == 1){
            if(z == 0){
                s += "D";
            }else{
                s += "R";
            }
            Try(i1, j1);
            s.pop_back(); 
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        s = "";
        cin >> n;
        ok = false;
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=n ; j++){
                cin >> a[i][j];
            }
        }
        if(a[1][1] == 0){
            cout << -1 << endl;
        }else{
            Try(1, 1);
            if(!ok) cout << "-1";
            cout << endl;
        }
    }

}
