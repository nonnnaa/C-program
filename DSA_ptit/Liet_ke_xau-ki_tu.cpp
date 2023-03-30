#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
const int maxN = 1e6 + 1;
int n, k;
char c;
int a[1001];
bool ok = false;

void Try(){
    int i = n;
    while(i > 0 && a[i] == k){
        --i;
    }
    if(i == 0){
        ok = true;
    }else{
        a[i]++;
        for(int j = i + 1 ; j<=n ; j++){
            a[j] = a[j-1];
        }
    }
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdin);
    cin >> c >> n;
    k = int(c);
    for(int i=1 ; i<=n ; i++){
        a[i] = 65;
    }
    while(!ok){
        for(int i=1 ; i<=n ; i++){
            cout << char(a[i]);
        }
        cout << endl;
        Try();
    }
    return 0;
}
