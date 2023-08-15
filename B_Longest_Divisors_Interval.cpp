#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;cin>>t;
     while(t--){
     long long n,ans=1;cin>>n;
     while(n%ans==0){ ans++;}
     cout<<ans-1<<endl;
     }  
    return 0;
}