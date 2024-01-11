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
        ll i,k=0,sum=0,N;
        cin>>N;
        for(i=0;i<N;i++) cin>>A[i];
        sort(A,A+N);
        for(i=0;i<N;i++)
        {
            sum++;
            if(sum==A[i])
            {
                k++;sum=0;
            }
        }
        cout<<k<<endl;
    }
    

}
