#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxN = 1e6 + 1;
int n;
void chuyen(int n, char a, char b, char c){
    if(n == 1){
        cout << a << " -> " << c << endl;
    }else{
        chuyen(n - 1, a, c, b);
        chuyen(1, a, b, c);
        chuyen(n - 1, b, a, c);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    chuyen(n, 'A', 'B', 'C');
    return 0;
}
