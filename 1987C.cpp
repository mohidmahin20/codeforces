#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define rev(A, N) sort(A, A + N, greater<int>())
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
       ll n; 
        cin >> n; 
        vector<ll>a(n);
        
        for (ll i = 0; i < n;i++) {
            cin >> a[i];
        }
        
        ll mx = 0;
        for (ll i = 0; i < n;i++) { 
            mx = max(a[i] + i, mx);
        }
        
        cout << mx<< endl; 
    }
    return 0;
}
