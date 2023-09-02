#include<bits/stdc++.h>
#define ll  long long
#define pb  push_back
#define fastread()   (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main(){
       fastread();
       int t;cin>>t;
       while(t--){
        int n;cin>>n;int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int sum=0;
        for(int i=0;2*i<n;i++){
           int l= a[n-1-i]-a[i];
           sum=sum+l;
        }
         cout<<sum<<endl;
        } 
       
       

    return 0;
}