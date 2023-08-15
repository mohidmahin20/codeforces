#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;cin>>a>>b;
    char s,t;
    int flag=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>s>>t;
            if(s=='C' || s=='M' || s=='Y' || t=='C' || t=='M' ||t=='Y' ){
                flag=1;

            }
        }
    }
    if(flag==1){
        cout<<"#Color"<<endl;
    }
    else {
        cout<<"#Black&White"<<endl;
    }
    

    
    return 0;
}