#include<bits/stdc++.h>
#define ll  long long
#define pb  push_back
#define fastread()   (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main(){
       fastread();
       int n;cin>>n;int a[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<0) a[i]=abs(a[i]);
       } 
       sort(a,a+n);
       cout<<a[0]<<endl;

    return 0;
}