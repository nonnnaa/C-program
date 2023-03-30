#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int dem = 0;
        for(int i=0 ;i<n ; i++)
        {
            int x; cin >> x;
            if(x==0) ++ dem;
        }
        cout << dem << endl;
    }
    return 0;
}