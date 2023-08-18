#include<bits/stdc++.h>
#define ll    long long
#define ull   unsigned long long
#define pb    push_back
using namespace std;
int main(){
     int t;cin>>t;
     while(t--){
        int a,b;cin>>a>>b;
        
        
        if(a>b){
         int l=a-b;
         if(l%2==0){
            cout<<'1'<<endl;;
         }
         else{
            cout<<'2'<<endl;
         }
        }
        else if(a<b){
            int h=b-a;
           if(h%2==0){
            cout<<'2'<<endl;;
         }
         else{
            cout<<'1'<<endl;
         }
        }
        else cout<<'0'<<endl;
     } 
    
    return 0;
}