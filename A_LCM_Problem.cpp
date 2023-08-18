#include<bits/stdc++.h>
#define ll    long long
#define ull   unsigned long long
#define pb    push_back
using namespace std;
int main(){
     int t;cin>>t;
     while(t--){
        int l,r;cin>>l>>r;
        if((l*2)>r) cout<<"-1 -1"<<endl;
        else cout<<l<<" "<<l*2<<endl;
     } 
    
    return 0;
}