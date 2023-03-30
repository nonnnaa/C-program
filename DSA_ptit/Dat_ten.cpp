#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxN = 1e6 + 1;
int n, a[maxN], k;
vector<string> v;
void display(){
	for(int i=1 ; i<=k ; i++){
		cout << v[a[i] - 1] << ' ';
	}
	cout << endl;
}

void Try(int i){
    for(int j=a[i-1] + 1 ; j<=n - k + i ; j++){
    	a[i] = j;
    	if(i == k){
    		display();
		}else{
			Try(i + 1);
		}
	}
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
	set<string> se;
    for(int i=1 ;i<=n ; i++){
    	string x; cin >> x;
    	se.insert(x);
	}
	for(string x : se){
		v.push_back(x);
	}
	n = v.size();
	for(int i=1 ; i<=k ;i++){
		a[i] = i;
	}
	Try(1);
    return 0;
}
