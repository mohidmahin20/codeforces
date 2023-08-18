#include<bits/stdc++.h>
#define ll    long long
#define ull   unsigned long long
#define pb    push_back
using namespace std;
int main(){
     int t;cin>>t;
     while(t--){
        int n,l=1,m=1;cin>>n;
        int sum1=0,sum2=0;
        int ar[n];
        for(int i=0;i<n/2;i++){
           l=l*2;
            sum1=sum1+l;
        }
        for(int i=l*2;i<n;i++){
           m=m*2;
            sum2=sum2+m;
        }
       
        cout<<sum1-sum2<<endl;
     } 
    
    return 0;
}