#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
const int maxN = 1e6 + 1;

ll Max(string a){
    for(int i=0 ; i<a.size() ; i++){
        if(a[i] == '5'){
            a[i] = '6';
        }
    }
    return stoll(a);
}
ll Min(string a){
    for(int i=0 ; i<a.size() ; i++){
        if(a[i] == '6'){
            a[i] = '5';
        }
    }
    return stoll(a);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string a, b;
    cin >> a >> b;
    cout << (ll)(Min(a) + Min(b)) << " " << (ll)(Max(a) + Max(b));
    return 0;
}
