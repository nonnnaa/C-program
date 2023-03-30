#include<bits/stdc++.h>
using namespace std;

int n, sum;
vector<vector<int>> v1;
int a[1001];
int x[1001];

void init(){
    cin >> n >> sum;
    for(int i=1 ; i<=n ; i++){
        cin >> a[i];
        x[i] = 0;
    }
    sort(a+1, a+n+1);
}

void Try(int i){
    for(int j=0 ; j<2 ; j++){
        x[i] = j;
        if(i == n){
            int s = 0;
            for(int i=1 ; i<=n ; i++){
                if(x[i]) s += a[i];
            }
            if(s == sum){
            	vector<int> v;
                for(int i=1 ; i<=n ; i++){
                    if(x[i]){
                        v.push_back(a[i]);
                    }
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
    int t; cin >> t;
    while(t--){
        init();
        Try(1);
        if(v1.size() == 0){
    		cout << -1 << endl;
		}else{
			sort(v1.begin(), v1.end());
			for(auto z : v1){
				cout << "[";
				for(int i = 0 ; i < z.size() - 1 ; i++){
					cout << z[i] << ' ';
				}
				cout << z[z.size() - 1] << "] ";
			}	
		}
		cout << endl;
		v1.clear();
    }
    
    
    return 0;
}

