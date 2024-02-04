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
    	 ll N,K,cnt=0,i;
        cin>>N>>K;
        vector<ll>v(N);
        for(i=0;i<N;i++)
        {
            cin>>v[i];
            cnt+=v[i]%2;
        }
        if(cnt<K || cnt%2 != K%2) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(i=0;i<N;i++)
            {
                if(K==1) break;
                if(v[i]%2==1)
                {
                    cout<<i+1<<' ';
                    K--;
                }
            }
            cout<<N<<endl;
        }

    }
  return 0;
}
