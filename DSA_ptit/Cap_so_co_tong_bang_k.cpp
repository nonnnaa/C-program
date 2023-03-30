#include<iostream>
#include<cstring>
#include<map>
using namespace std;
#define ll unsigned long long


int main()
{
    freopen("input.txt", "r", stdin);
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int a[n];
        map<int, int> mp;
        for(int &x : a)
        {
            cin >> x;
            mp[x]++;
        }
        ll ans = 0;
        for(auto x : mp)
        {
            if(mp[k - x.first])
            {
                if(k - x.first == x.first)
                {
                    
                    ans += 1ll * x.second * (x.second - 1) / 2;
                    x.second = 0;
                }
                else
                {
                    ans += 1ll * x.second * mp[k - x.first];
                    x.second = mp[k - x.first] = 0;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}