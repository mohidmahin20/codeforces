#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        char s2[n] , e=s[0];
        int cnt=0;int flag=0;
        for(int i=0;i<n;i++){
            if(s[i] != e){
                s2[cnt]=e;
                e=s[i];
                cnt++;
            }
       for(int j = 0; j < cnt; j++){
        if(s[i] == s2[j]){
          cout<<"NO"<<endl;
          flag = 1;
          break;
        }
      }
      if(flag == 1){
        break;
      }
    }
    if(flag == 0){
      cout<<"YES"<<endl;
    }
  }
  return 0;
}