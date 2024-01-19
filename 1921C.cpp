#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input1.txt","r",stdin);
    freopen("output1.txt","w",stdout);
#endif

    ll t; cin >> t;
    while(t--) {
        ll n,f,a, b;
        cin >> n>> f>> a>> b;
        ll ar[n];
        for(int i =0; i< n;i++) {
            cin >>ar[i];
        }
        ll p= 0,m;
        for(int i = 0; i < n; i++) {
            m = min(b, abs(ar[i] - p) * a);
            f = f - m;
            p = ar[i];
        }
        if(f > 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
