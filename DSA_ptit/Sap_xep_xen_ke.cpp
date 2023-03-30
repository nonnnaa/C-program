#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>

using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        sort(a, a+n);
        int l = 0, r = n - 1;
        while(l < r)
        {
            cout << a[r--] << ' ' << a[l++] << ' ';
        }
        if(l == r) cout << a[l] << ' ';
        cout << endl;
    }
    return 0;
}