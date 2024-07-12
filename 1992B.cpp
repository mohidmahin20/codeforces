#include <bits/stdc++.h>
#define ll   long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(k + 1); 
        for (ll i = 1; i <= k; ++i) {
            cin >> a[i];
        }

       
        sort(a.begin() + 1, a.end());

      
        ll op = n - a[k]; 
        for (ll i = 1; i < k; ++i) {
            op += (a[i] - 1); 
        }

        cout << op << endl;
    }
    return 0;
}
