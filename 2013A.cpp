#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
       ll n,x,y;
       cin >>n>>x>>y; 
       ll sec= min(x,y);
       cout<<(n+sec-1)/sec<<endl;
    }
    
    return 0;
}
