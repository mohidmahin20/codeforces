#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n;cin>>n;int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        int sum=0;
        int minn=INT_MAX;;
        for(int j=0;j<n;j++){
            sum=sum+a[j];
        }
        for(int j=0;j<n;j++){
            minn=min(minn,a[j]);
        }
        int m=minn*n;
        int res=sum-m;
        cout<<res<<endl;
      
    }
    
    return 0;
}