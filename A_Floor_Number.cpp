#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        int sum=2,cnt=1;
        while(sum<a){
            sum=sum+b;
            cnt++;
        }
        cout<<cnt<<endl;
     }
    
    return 0;
}