#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

#ifndef ONLINE_JUDGE
	freopen("input1.txt","r",stdin);
	freopen("output1.txt","w",stdout);
#endif
    	 
        ll N,M,i;
        cin>>N>>M;
        vector<ll>v(N+1),v2(N+1);
        set<ll>st;
        for(i=1;i<=N;i++) cin>>v[i];
        for(i=N;i>=1;i--)
        {
            st.insert(v[i]);
            v2[i]=st.size();
        }
        for(i=1;i<=M;i++)
        {
            ll x;
            cin>>x;
            cout<<v2[x]<<endl;
        }

    
  return 0;
}
