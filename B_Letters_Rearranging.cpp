#include<bits/stdc++.h>
#define ll    long long
#define ull   unsigned long long
#define pb    push_back
using namespace std;
bool isPalindrome(const string& s) {
    ll n = s.length();
    for (ll i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - 1 - i]) {
            return false;
        }
    }
    return true;
}
int main(){
     int t;cin>>t;
     while(t--){
        string s;cin>>s;
        ll l=s.length();
        int flag=0;
        int pos=0;
        // for(int i=0;i<l;i++){
            
        //     for(int j=l;j>0;j--){
        //         if(s[i]!=s[j]) flag=1;break;
                
        //     }
        //     if(flag) break;
        //     else flag=0; break;
        // }
        for(ll i=0;i<l;i++){
            
            if(s[i]!=s[i+1]) pos=1; break;
        }
        if(pos==0) cout<<"-1"<<endl;
       else if(isPalindrome(s)){
         sort(s.begin(),s.end());
            cout<<s<<endl;

       }
         
        else{
            cout<<s<<endl;
           
        }
     
     } 
    
    return 0;
}