#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

#ifndef ONLINE_JUDGE
	freopen("input1.txt","r",stdin);
	freopen("output1.txt","w",stdout);
#endif
ll N,M,cnt=0;
        cin>>N>>M;
        if(M<N) cout<<N-M<<endl;
        else
        {
            while(M>N)
            {
                if(M%2==0)
                {
                    M=M/2;
                    cnt++;
                }
                else
                {
                    M++;
                    cnt++;
                }
            }
            cout<<fabs(cnt+N-M)<<endl;
        }
}
