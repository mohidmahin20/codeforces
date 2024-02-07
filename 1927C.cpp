#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

#ifndef ONLINE_JUDGE
	freopen("input1.txt","r",stdin);
	freopen("output1.txt","w",stdout);
#endif
     int t;
    cin >> t;

    while (t--) {
        ll n,m,k;
          cin>>n>>m>>k;
          ll a[n];
          ll b[m];
          for(ll i=0;i<n;i++){
              cin>>a[i];
          } 
          for(ll i=0;i<m;i++){
               cin>>b[i];
          }

          sort(a,a+n);
          sort(b,b+m);

          set<ll> st1,st2;
          
          for(ll i=0;i<n;i++){
             if(a[i]<=k) st1.insert(a[i]);
          }
          for(ll i=0;i<m;i++){
             if(b[i]<=k) st2.insert(b[i]);
          }

          int l=k/2;
          if(st1.size() <l || st2.size()<l){
             cout<<"NO"<<endl;
          } 
          else{
            bool flag=1;
            set<ll> s;
            for(auto it:st1){
            s.insert(it);
            }

            for(auto it: st2){
            s.insert(it);
            }
                 
            for(ll i=1;i<=k;i++){
                  if(s.find(i)==s.end()) flag=0;
            }
           if(flag==1) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;

       }
    }

  return 0;
}
