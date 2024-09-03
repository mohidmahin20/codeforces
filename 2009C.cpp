#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        ll x, y, k;
        cin >> x >> y >> k;
        ll as,ad;
        if(x%k==0)
       {
           as=x/k;
       }
       else
       {
           as=(x/k)+1;
       }
       
       if(y%k==0)
       {
           ad=y/k;
       }
       else
       {
           ad=(y/k)+1;
       }
        
        int mx=max(as,ad);
       int ans=mx*2;
       
       if(as>ad)
       {
           ans--;
       }
       
       cout<<ans<<endl;
    }
    
    return 0;
}
