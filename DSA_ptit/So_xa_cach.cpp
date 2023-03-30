#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
const int maxN = 1e6 + 1;

int n;
int a[1001];
bool ok;

void init(){
    cin >> n;
    ok = false;
    for(int i=1 ; i<=n ; i++){
        a[i] =  i;
    }
}

void Try(){
    int i= n - 1;
    while(a[i] > a[i+1]){
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
bool check(){
    for(int i=1 ; i<n ; i++){
        if(abs(a[i] - a[i+1]) == 1){
            return false;
        }
    }
    return true;
}

void display(){
    for(int i=1 ; i<=n ; i++){
        cout << a[i];
    }
    cout << endl;
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
            if(check()){
                display();
            }
            Try();
        }
    }
    return 0;
}
