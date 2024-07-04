#include <bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define rev(A,N) sort(A,A+N,greater<int>())
using namespace std;
int sum(int n){
    n*=n;
    return n;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    ll t;cin >> t;
   
    while (t--) {
     ll n,k;
        cin >> n>>k;
        if(n==1){
            cout<<k<<endl;
        }
        else{
            ll c=0;
            if(k+1==(1<<((ll)log2(k)))){
                cout<<k<<" ";
            }
            else{
                cout<<(1<<(ll)log2(k))-1<<" ";
                c=k-((1<<(ll)log2(k))-1);
            }
            for(int i=0; i<(n-1); i++){
                cout<<c<<" ";
                c=0;
            }
            cout<<endl;
        }
   }     
    return 0;
}
