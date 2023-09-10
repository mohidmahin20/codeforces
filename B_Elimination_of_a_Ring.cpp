#include<bits/stdc++.h>
#define ll  long long
#define pb  push_back
#define fastread()   (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main(){
       fastread();
       int t;
       cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        set<ll> st;

        for (ll i = 0; i < n; i++) {
            ll tmp;
            cin >> tmp;
            st.insert(tmp);
        }

        ll cnt = st.size();
        ll ans;

        if (cnt <= 2) {
            ans = n / 2 + 1;
        } else {
            ans = n;
        } 
        cout<<ans<<endl;
    }

    return 0;
}