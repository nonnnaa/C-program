#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{
    // freopen("input.txt", "r",stdin);
    // freopen("output.txt", "w",stdout);
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        bool ok = true;
        if(s[0] == '0')
        {
            cout << 0 << endl;
            continue;
        }
        int n = s.size();
        int f[n + 1];
        s = " " + s;
        memset(f, 0, sizeof(f));
        f[0] = 1;
        f[1] = 1;
        string x = "";
        x += s[1];
        x += s[2];
        if(stoi(x) > 10 && stoi(x) <= 26)
        {
            f[2] = 2;
        }else
        {
            f[2] = 1;
        }
        for(int i=3 ; i<=n ; i++)
        {
            if(s[i] == '0')
            {
                if(s[i - 1] == '1' || s[i - 1] == '2')
                {
                    f[i] = f[i - 2];
                }
                else
                {
                    cout << 0 << endl;
                    ok = false;
                    break;
                }
            }
            else
            {
                string tmp = "";
                tmp += s[i - 1];
                tmp += s[i];

                if(stoi(tmp) >= 10 && stoi(tmp) <= 26)
                {
                    f[i] = f[i - 1] + f[i - 2];
                }
                else
                {
                    f[i] = f[i - 1];
                }
            }
            
        }
        if(ok) cout << f[n] << endl;
    }
    return 0;
}

