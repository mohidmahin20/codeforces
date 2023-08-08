#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        int flag=0;
        if(a+b==c){
          flag=1;
        }
        else if(a+c==b){
            flag=1;
        }
        else if(b+c==a){
            flag=1;
        }
        else{
            flag=0;
        }
        
     if(flag==1){
         cout <<"YES"<<endl;
    }
    else{
        cout <<"NO"<<endl;
    }
    }
    
    return 0;
}