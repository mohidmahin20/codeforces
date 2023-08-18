#include<bits/stdc++.h>
#define ll    long long
#define ull   unsigned long long
#define pb    push_back
using namespace std;
int main(){
    

    long t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a, u, v;

        for (ll i = 0; i < n; i++) {
            long x;
            cin >> x;
            a.push_back(x % 2);
            if (x % 2==1) {
                u.push_back(x);
            } else {
                v.push_back(x);
            }
        }

        sort(u.begin(), u.end());
        sort(v.begin(), v.end());

        bool res = 1;
        ll idxa = 0, idxb = 0;

        for (ll i = 0; res && i < n; i++) {
            if (a[i]) {
                a[i] = u[idxa++];
            } else {
                a[i] = v[idxb++];
            }
            if (i > 0 && a[i - 1] > a[i]) {
                res = 0;
            }
        }

        cout << (res==1 ? "YES" : "NO") << endl;
    }
   
    return 0;
}