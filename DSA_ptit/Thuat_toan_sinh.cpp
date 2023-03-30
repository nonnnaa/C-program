#include<bits/stdc++.h>
using namespace std;
const int mod = 1e6 + 1;
using ll = long long;
int n;
int a[mod];
void Try(){
	int i = n;
	while(a[i] == 1){
		a[i] = 0;
		--i;
	}
	a[i] = 1;
}
bool check(){
	for(int i=1 ; i<=n ; i++){
		if(!a[i]){
			return false;
		}
	}
	return true;
}
void xuoi(){
	for(int i=1 ; i<=n ;i++){
		cout << a[i] << ' ';
	}
}
void nguoc(){
	for(int i=n ; i>0 ; i--){
		cout << a[i] << ' ';
	}
}
int main(){
 	cin >> n;
 	if(n % 2 == 0){
 		n /= 2;
 		while(check() == false){
 			xuoi();
 			nguoc();
 			cout << endl;
 			Try();
		}
		xuoi();
 		nguoc();
 		cout << endl;
	}else{
		n /= 2;
		while(check() == false){
			xuoi();
			cout << "1 ";
			nguoc();
			cout << endl;
			xuoi();
			cout << "0 ";
			nguoc();
			cout << endl;
			Try();
		}
		xuoi();
		cout << "1 ";
		nguoc();
		cout << endl;
		xuoi();
		cout << "0 ";
		nguoc();
		cout << endl;
	}
	return 0;
}

