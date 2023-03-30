#include <bits/stdc++.h>
using namespace std;
int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        sort(a, a + n);

        auto pos = lower_bound(a , a + n , k);

        if(*pos == k)
        {
            cout << pos - a + 1 << endl;
        }
        else if(pos - a > 0)
        {
            cout << pos - a << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}