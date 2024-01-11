#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input1.txt","r",stdin);
	freopen("output1.txt","w",stdout);
#endif
ll t;cin>>t;
    while(t--)
    {
        ll N,K,i,x,y;
        cin>>N>>K;
        ll A[N+1]={};
        for(i=1;i<N;i++)
        {
            cin>>x>>y;
            A[x]++;
            A[y]++;
        }
        if(A[K]<=1) cout<<"Ayush"<<endl;
        else
        {
            if(N%2==1) cout<<"Ashish"<<endl;
            else cout<<"Ayush"<<endl;
        }
    }
    

}
