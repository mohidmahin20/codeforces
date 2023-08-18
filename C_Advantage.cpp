#include<bits/stdc++.h>
#define ll    long long
#define ull   unsigned long long
#define pb    push_back
using namespace std;
int main(){
     int t;cin>>t;
     while(t--){
        int n;cin>>n;
     vector<long> v(n);
        ll maxx = 0, max2 = 0;

        for (ll i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] >= maxx) {
                max2 = maxx;
                maxx = v[i];
            } else if (v[i] > max2) {
                max2 = v[i];
            }
        }

        for (long i = 0; i < n; i++) {
            if(v[i] == maxx) cout <<v[i]-max2<<" ";
            else cout<<v[i]-maxx<<" ";
            
        }
    cout<<endl;



     }    
     
       
    return 0;
}