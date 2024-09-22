#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
     ll n;cin>>n; 
     vector<ll>v(n);
     for(int i=0;i<n;i++){
         cin>>v[i];
     }
   
     ll sum=0;
     for(int i=0;i<n-2;i++){
         sum+=v[i];
     }
     
     ll ans= v[n-1]-(v[n-2]-sum);
     cout<<ans<<endl;
    }
    
    return 0;
}
