#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(cnt && s[i]=='B') cnt--;
            else cnt++;
        }
        cout<<cnt<<endl;;
    }
    return 0;
}

