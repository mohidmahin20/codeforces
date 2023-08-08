#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >>t;
    for(int k=0;k<t;k++){
        int n;
    cin>>n;
    int bal=(n*(n-1))/2;
    vector<int> arr(bal);
    for(int i=0;i<bal;i++){
        cin>>arr[i];

    }
    sort(arr.begin(), arr.end());
    int c=n-1,d;
    d=n-1;
    for(int i=1;i<n;i++){
        cout<<arr[d-1]<< ' ';
        c--;
        d+=c;
    }
    cout<<arr[bal-1];
    cout<<endl;
    }
    return 0;
}