#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >>a>>b;
    int l,c;
    if(a>b){
        l=a-b;
        c=b;
    }
    else{
        l=b-a;
        c=a;
    }
    cout <<c <<" "<<l/2;
    
    return 0;
}