#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll l,ans=0;
    string s1,s2;
    cin>>l>>s1>>s2;
    for(int i=0;i<l;i++)
    {
        if(s1[i]!=s2[i])
        {
            if(i+1<l && s1[i+1]!=s2[i+1] && s1[i]!=s1[i+1]) i++;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}

