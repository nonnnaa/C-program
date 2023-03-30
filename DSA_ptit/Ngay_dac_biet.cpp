#include<bits/stdc++.h>
using namespace std;
int a[9] = {0, 0, 0, 0, 0, 2, 0, 0, 0};
bool ok = false;
void Try(){
    int i = 8;
    while( i > 0 && a[i] == 2){
        a[i] = 0;
        --i;
    }
    if(i == 0){
        ok = true;
    }else{
        a[i] = 2;
    }
}
bool check(){
    if(a[1] == 0 && a[2] == 0) return false;
    if(a[3] == 0 && a[4] == 0) return false;
    if(a[3] == 2) return false;
    if(a[5] == 0) return false;
    return true;
}
void display(){
    cout << a[1] << a[2] << "/" << a[3] << a[4] << "/";
    for(int i=5; i<=8 ; i++) cout << a[i];
    cout << endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    while(!ok){
        if(check()){
            display();
        } 
        Try();
    }
}
