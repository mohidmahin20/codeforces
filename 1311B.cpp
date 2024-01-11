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
         ll N,M,i,x,F=1;
        cin>>N>>M;
        vector<ll>A(N+1),B(N+1);
        for(i=0;i<N;i++) cin>>A[i];
        for(i=0;i<M;i++)
        {
            cin>>x;
            B[x-1]=1;
        }    
        while(1)
        {
            F=0;
            for(i=0;i<N;i++)
            {
                if(B[i] && A[i]>A[i+1])
                {
                    F=1;
                    swap(A[i],A[i+1]);
                }
            }
            if(F!=1) break;
        }
        F=1;
        for(i=0;i<N-1;i++) F&=A[i]<=A[i+1];
        if(F==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

}
