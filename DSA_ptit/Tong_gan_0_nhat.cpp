#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<vector>
#include<map>
#include<queue>
#include<string>
#include<set>
#include<limits.h>
using namespace std;
#define ll unsigned long long
const int mod = 1e9 + 7;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if(abs(a.first) == abs(b.first))
        return a.second < b.second;
    return abs(a.first) < abs(b.first);
}


void solve(vector<pair<int, int>> v)
{
    int ans = INT_MAX, sum = INT_MAX;
    int index = 0;
    for(int i=0 ; i<v.size()-1 ; i++)
    {
        int tmp = abs(v[i].first + v[i+1].first);
        if(tmp < sum)
        {
            sum = tmp;
            ans = v[i].first + v[i + 1].first;
            index = min(v[i].second, v[i + 1].second);
        }
        else if(tmp == sum)
        {
            if(index > min(v[i].second, v[i + 1].second))
            {
                index =  min(v[i].second, v[i + 1].second);
                ans = v[i].first + v[i + 1].first;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    freopen("input.txt", "r", stdin);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        vector<pair<int, int>> v;
        for(int i=0 ; i<n ; i++)
        {
            cin >> a[i];
            v.push_back({a[i], i});
        } 
        sort(v.begin(), v.end(), cmp);
        solve(v);
    }
    return 0;
}