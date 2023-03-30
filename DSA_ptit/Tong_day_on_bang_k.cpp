#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e6 + 1;
int n, dem = 0;
ll k;
ll a[mod];
ll c[mod];
void Try(){
	ll i = n;
	while(a[i] == 1){
		a[i] = 0;
		--i;
	}
	a[i] = 1;
}
bool check(){
	for(int i=1 ; i<=n ; i++){
		if(a[i] == 0){
			return false;
		}
	}
	return true;
}
int main(){
    cin >> n >> k;
    for(int i=1 ; i<=n ; i++){
    	cin >> c[i];
	}
    while(check() == false){
    	ll sum = 0;
    	for(int i=1 ; i<=n ; i++){
    		if(a[i]) sum += c[i];
		}
		if(sum == k){
			dem++;
			for(int i=1 ; i<=n ; i++){
				if(a[i]){
					cout << c[i] << ' ';
				}
			}
			cout << endl;
		}
		Try();
	}
	ll sum = 0;
	for(int i=1 ; i<=n ; i++){
    	if(a[i]) sum += c[i];
	}
	if(sum == k){
		for(int i=1 ; i<=n ; i++){
			if(a[i]) cout << c[i] << ' ';
		}
		cout << endl;
		dem++;
	}
	cout << dem;
}
