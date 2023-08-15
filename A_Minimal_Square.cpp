#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b;cin>>t;
    while(t--){
        cin>>a>>b;
        if(b>a){
        cout<<max(a*2,b)*max(a*2,b)<<endl;
        }
        else {
            cout<<max(b*2,a)*max(b*2,a)<<endl;
        }
    }
    return 0;
    
    return 0;
}