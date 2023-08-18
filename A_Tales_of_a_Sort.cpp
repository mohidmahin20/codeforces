#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    ll t;cin>>t;
    while(t--){
        ll n; cin>>n;
        ll res=0, cur=0;
        for(long i = 0; i < n; i++){
            long x; cin>>x;
            if(x < cur){
                res = (res > cur ? res : cur);
                }
            cur = x;
        }

       cout<<res<<endl;;
    }

}