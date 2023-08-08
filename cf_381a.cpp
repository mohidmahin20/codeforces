#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int j=n-1;
    int f=0,sum1,sum2; sum1=sum2=0;
    for(int i=0; i<n;i++){
        if(arr[f]>arr[j]){
            if(i%2==0) sum1+=arr[f];
            else sum2+=arr[f];
            f++;
        }
        else{
            if(i%2==0) sum1+=arr[j];
            else sum2+=arr[j];
            j--;
        }
    }
    cout<<sum1<<" "<<sum2<<endl;
    return 0;
}