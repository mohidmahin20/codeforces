#include<bits/stdc++.h>
#define ll  long long
#define pb  push_back
#define fastread()   (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main(){
       fastread();
       int t; cin>>t;
    for(int i=0; i<t; i++){
        int n, a, q; cin>>n>>a>>q;
        int cnt=a;int cntp=0;
        int flag=0;
        for(int j=0; j<q; j++){
            char x;
            cin>>x;
            if(x=='+'){
                cnt++;
                cntp++;
            }else{
                cnt--;
            }if(cnt==n){
                flag=1;
            }
        }if( a==n || flag){
            cout<<"YES"<<endl;
        }else if(cntp+a>=n){
            cout<<"MAYBE"<<endl;
        }else{
            cout<<"NO"<<endl;
        }


    } 

    return 0;
}