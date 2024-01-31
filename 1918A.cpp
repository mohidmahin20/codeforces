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
    	int n,m;cin>>n>>m;
        cout<<(m/2)*n<<endl;

    }
  return 0;
}
