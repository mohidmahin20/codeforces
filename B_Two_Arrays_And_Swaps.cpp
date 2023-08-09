#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int y=0;y<t;y++){
        int n,k;cin>>n>>k;
        int a[n],b[n];int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        for(int i=0;i<k;i++){
            for(int j=0;j<n;j++){
                if(a[j]<b[j]){
                   swap(a[j],b[j]);
                   break;
                    
                }
            }

        }
        for(int i=0;i<n;i++){
            sum=sum+a[i];
        } 
        cout<<sum<<endl;  
    }
    
    return 0;
}