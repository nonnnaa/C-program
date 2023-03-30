#include <bits/stdc++.h>
using namespace std;
#define ll long long

int binarySearch(int a[], int l, int r, int x)
{
    if(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] == x)
        {
            return m;
        }
        else if(a[m] > x)
        {
            return binarySearch(a, l, m - 1, x);
        }
        else
        {
            return binarySearch(a, m + 1, r, x);
        }
    }
    return -1;
}

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int a[n];
        for(int i=0 ;i<n ; i++)
        {
            cin >> a[i];
        }
        sort(a, a+n);
        int pos = binarySearch(a, 0, n-1, k);
        if(pos != -1)
        {
            cout << pos  +  1 << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}