#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int h=0;h<t;h++){
        int n;
        cin>>n;
        int a=n/2020;
        int b=n%2020;
        if(a>=b){
            cout <<"YES"<<endl;
        }
        else{
            cout <<"NO"<<endl;
        }
    }
    
    return 0;
}