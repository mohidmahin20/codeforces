#include<bits/stdc++.h>
#define ll    long long
#define ull   unsigned long long
#define pb    push_back
using namespace std;
int main(){
     int t;cin>>t;
     while(t--){
        int a,b,c;cin>>a>>b>>c;int l;
        if(c>b){
             l =(c-b)+c-1;
        }
        else{
            l=b-1;
        }
   
     int s=a-1;
    if(l>s) cout <<"1"<<endl;
    else if(s>l) cout <<"2"<<endl;
    else cout<<"3"<<endl;
     }
    return 0;
}