#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
using namespace std;
int main()
{
    
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>v;
        for(int i=n; i>0; i--){
            v.pb(i);
        }
        for(int i=0; i<n; i++){
            if(v[i] == i+1){
                swap(v[i],v[i+1]);
            }
        }
        for(int i=0; i<n; i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}