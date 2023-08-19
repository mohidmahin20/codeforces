#include<bits/stdc++.h>
#define ll    long long
#define ull   unsigned long long
#define pb    push_back
using namespace std;
int main(){
     int a,b,max;cin>>a>>b;
    if(a>b) max=a;
    else max=b;
    if(max==1) cout<<"1/1"<<endl;
    else if(max==2) cout<<"5/6"<<endl;
    else if(max==3) cout<<"4/6"<<endl;
    else if(max==4) cout<<"1/2"<<endl;
    else if(max==5) cout<<"1/3"<<endl;
    else if(max==6) cout<<"0/1"<<endl;
    
    return 0;
}