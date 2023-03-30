#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxN = 1e6 + 1;

int n, k, a[maxN], x[maxN];
vector<vector<int>> v1;
bool ok;

void init(){
    k = n;
    for(int i=1 ; i<=k ; i++){
        x[i] = i;
    }
    ok = false;
}

bool check(){
    for(int i=1 ; i<k ; i++){
        if(a[x[i]] > a[x[i+1]]) return false;
    }
    return true;
}
void Try(int i){
    if(check()){
        vector<int> v;
        for(int i=1 ; i<=k ; i++){
            v.push_back(a[x[i]]);
        }
        v1.push_back(v);
    }
    for(int j = x[i-1] + 1 ; j<= n - k + i ; j++){
        x[i] = j;
        if(i == k){
            if(check()){
                vector<int> v;
                for(int i=1 ; i<=k ; i++){
                    v.push_back(a[x[i]]);
                }
                v1.push_back(v);
            }
        }else{
            Try(i + 1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n;
    for(int i=1 ;i<=n ; i++){
    	cin >> a[i];
	}
	Try(1);
    for(vector<int> res : v1){
        for(int cnt : res){
            cout << cnt << ' ';
        }
        cout << endl;
    }
    return 0;
}
