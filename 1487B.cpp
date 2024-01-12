#include<bits/stdc++.h>
#define ll long long
using namespace std;
int A[500000]={};
int main(){

#ifndef ONLINE_JUDGE
	freopen("input1.txt","r",stdin);
	freopen("output1.txt","w",stdout);
#endif
ll t;cin>>t;
    while(t--)
    {
        ll a, b;
        cin >> a >> b;
        if(a%2==0){
            if(b%a==0){cout<<a<<endl;continue;}
            if(a>=b)cout<<b<<endl;
            else cout<<b%a<<endl;
        }else{
            ll p=a/2;
            b--;
            cout<<(((b)+(b/p))%a)+1<<endl;
        }
    }
    

}
