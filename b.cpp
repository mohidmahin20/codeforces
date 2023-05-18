#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int n;cin>>n;
        int ar[n];
        int arr[n],x=0;
        for(int i=0;i<n;i++){
            cin >> ar[i];

        }
        for(int i=0;i<n;i++){
            if(ar[i]==i+1){
                continue;
            }
            arr[x++]=abs(ar[i]-(i+1));
        }
        int y=arr[0];
        for(int i=1;i<x;i++){
            y=__gcd(y,arr[i]);
    
        }
        cout<< y << endl;

    }
}