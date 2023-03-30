#include <iostream>
#include <vector>

using namespace std;

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int v[n];
    int a[n];
    int ans = 0;
    v[0] = 1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i=1 ; i<n ; i++){
        int lmax = 0;
        for(int j=0 ; j<i ; j++){
            if(a[i] > a[j]){
               lmax = v[j];
            }
        }
        v[i] = lmax + 1;
        ans = max(ans, v[i]);
    }
    
    cout << n - ans << endl;
   

    return 0;
}