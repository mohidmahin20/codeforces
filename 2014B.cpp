#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t; cin>>t;
    while(t--) {
      ll n,k;
        cin>>n>>k;
        ll st=n-k+1; 
        ll end=n;           
        ll cnt=((end+1)/2)-(st/2);
     
        if (cnt%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}
