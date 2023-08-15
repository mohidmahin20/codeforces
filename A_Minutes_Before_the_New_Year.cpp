#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int h,m;
        cin>>h>>m;
        int ms=60-m;
        int hs=23-h;
        int r=hs*60+ms;
        cout<<r<<endl;
    }
    
    return 0;
}