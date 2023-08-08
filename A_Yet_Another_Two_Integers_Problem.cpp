#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int t;cin>>t;
   for(int i=0;i<t;i++){
     int a, b;
    cin >> a>> b;
   if(a>b){
     int l=a-b;
    if(l%10==0){
        cout<< l/10<<endl;
    }
    else{
        cout <<(l/10)+1<<endl;
    }
   }
   else{
     int l=b-a;
    if(l%10==0){
        cout<< l/10<<endl;
    }
    else{
        cout <<(l/10)+1<<endl;;
    }
   }
   }

    return 0;
}
