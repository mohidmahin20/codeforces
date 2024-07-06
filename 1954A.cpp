#include <bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define rev(A,N) sort(A,A+N,greater<int>())
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    int t;cin >> t;
   
    while (t--) {
       ll a, b, c;cin >> a >> b >> c;
        int cnt = 1;
        map<ll,ll> mp;
        for (ll i = 1; i <= a; i++) {
            mp[cnt]++;
            cnt++;
            if (cnt > b) cnt = 1;
        }

        bool flag =1;
        for (ll i = 1; i <= b; i++) {
            if (a - mp[i] <= c) {
                flag = 0;
                break;
            }
        }

        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
   }     
    return 0;
}
