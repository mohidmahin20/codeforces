#include<bits/stdc++.h>
#define ll    long long
#define ull   unsigned long long
#define pb    push_back
using namespace std;
int main(){
     int t;cin>>t;
    while(t--){
        ll n;cin>> n;
        ll s=0;
        for(int i=0;i<n;i++){
            ll x;cin>>x;
            s+=x;
        }
         if(s>=n) cout<<s-n<<endl;
         else cout<<1<<endl;
    } 
   
    return 0;
}