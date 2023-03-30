#include<bits/stdc++.h>
using namespace std;

int n;
bool ok;
int a[1001];
int dx[] = {1, 0};
int dy[] = {0, 1};
string s;

void init(){
    ok = false;
    cin >> s;
    s = "@" + s;
    n = s.size() - 1;
    for(int i=1 ; i<=n ; i++){
        a[i] = i;
    }
}

void Try(){
    int i = n - 1;
    while(i > 0 && a[i] > a[i+1]){
        --i;
    }
    if(i == 0){
        ok = true;
    }else{
        int j = n;
        while(a[i] > a[j]){
            --j;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
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
        init();
        while(!ok){
            for(int i=1 ; i<=n ; i++){
                cout << s[a[i]];
            }
            Try();
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
