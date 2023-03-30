#include <bits/stdc++.h>
using namespace std;

int crossSum(int a[], int l, int m, int r)
{
    int left_sum = INT_MIN, sum = 0;
    for(int i=m ; i>=l ; i--)
    {
        sum += a[i];
        if(sum > left_sum)
        {
            left_sum = sum;
        }
    }
    sum = 0;
    int right_sum = INT_MIN;
    for(int i=m+1 ; i<=r ; i++)
    {
        sum += a[i];
        if(sum > right_sum)
        {
            right_sum = sum;
        }
    }
    return max({left_sum, right_sum, left_sum + right_sum});
}

int solve(int a[], int l, int r)
{
    if(l > r)
    {
        return INT_MIN;
    }
    if(l == r)
    {
        return a[l];    
    }
    int m = (l + r) / 2;
    return max({solve(a, l, m), solve(a, m + 1, r), crossSum(a, l, m, r)});
}
int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        cout << solve(a, 0, n-1) << endl;
    }
    return 0;
}