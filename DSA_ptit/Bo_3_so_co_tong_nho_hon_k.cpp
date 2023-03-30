#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll unsigned long long

int main()
{
    freopen("input.txt", "r", stdin);
    int t; cin >> t;
    while(t--)
    {
        int n, sum; cin >> n >> sum;
        int a[n];
        for(int &x : a) cin >> x;
        sort(a, a+n);
        ll ans = 0;
        for(int i=0 ; i<n-2 ; i++)
        {
            int j = i + 1 , k = n - 1;
            while(j < k)
            {
                if(a[i] + a[j] + a[k] >= sum)
                {
                    --k;
                }
                else
                {
                    ans += 0ll + (k - j);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}

