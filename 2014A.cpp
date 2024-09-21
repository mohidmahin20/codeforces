#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t; cin>>t;
    while(t--) {
      ll n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for (int i=0;i<n;i++) {
            cin>>arr[i];
        }

        ll a=0,b=0;

        for (int i=0;i<n;i++) {
            if (arr[i]>=k) {
                a+=arr[i];
            }
            else if(arr[i]==0 && a>0) {
                b++;
                a--;
            }
        }

        cout<<b<<endl;
    }
    
    return 0;
}
