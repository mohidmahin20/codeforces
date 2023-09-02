#include<bits/stdc++.h>
#define ll  long long
#define pb  push_back
#define fastread()   (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main(){
       fastread();
       int t;cin>>t;
       while(t--){
        int n;cin>>n;
        if(n==1) cout<<"2"<<endl;
        else if(n % 3 == 0) cout << n / 3<<endl;
        else if(n % 3 == 1) cout<<2 + ((n - 4) / 3)<<endl;
        else if(n % 3 == 2) cout<< 1+ (n / 3)<<endl;
       } 

    return 0;
}