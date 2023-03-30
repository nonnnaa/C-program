#include<bits/stdc++.h>
using namespace std;
int n, cnt;
bool xuoi[1001], nguoc[1001], cot[1001];

void Try(int i){
    for(int j=1 ; j<=n ; j++){
        if(!xuoi[i + j - 1] && !nguoc[i - j + n] && !cot[j]){
            xuoi[i + j - 1] = nguoc[i - j + n] = cot[j] = true;
            if(i == n){
                ++cnt;
            }else{
                Try(i + 1);
            }
            xuoi[i + j - 1] = nguoc[i - j + n] = cot[j] = false;
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
        cin >> n;
        cnt = 0;
        for(int i=1 ; i<=n ;i++){
            xuoi[i] = nguoc[i] = cot[i] = false;
        }
        Try(1);
        cout << cnt << endl;
    }

}
