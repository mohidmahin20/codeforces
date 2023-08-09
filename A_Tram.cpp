#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int s=0,m=0;
   int a,b;
    for(int i=0;i<t;i++){
        
      cin >> a >> b;
		s += b - a;
		if(m < s)
			m = s;
       
    }
   
   cout<<m;
    
    return 0;
}