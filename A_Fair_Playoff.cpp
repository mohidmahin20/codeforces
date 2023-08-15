#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c,d;cin>>a>>b>>c>>d;
        if(min(a,b)>c && min(a,b)>d){
            cout<<"NO"<<endl;
        }
        else if(min(c,d)>a && min(c,d)>b){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}