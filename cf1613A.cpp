#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    for(int i=0;i<t;i++){
        int a,b,c,d;
        cin >> a >>b;
        cin >> c >>d;
        if(b!=0){
        for(int j=0;j<b;j++){
            
                a=a*10;
            }
             
        }
        if(d!=0){
        for(int j=0;j<d;j++){
            
                c=c*10;

            }
            
        }
        if(a>c){
            cout << ">" << endl;
        }
        else if(a<c){
            cout << "<" << endl;
        }
        else{
            cout << "=" << endl;
        }

    }
}