#include<bits/stdc++.h>
#define ll    long long
#define ull   unsigned long long
#define pb    push_back
using namespace std;
int main(){
    long t; cin >> t;
    while(t--){
        long x; cin >> x;
        vector<int> v; bool flag(1);
        while(x > 1){
            if(x % 2 == 0) {
                flag = 0; break;
                }
            if((x / 2) % 2){
                v.push_back(2);
                x /= 2;
                }
            else{
                v.push_back(1);
                 x = (x + 1) / 2;
                 }
        }

        if(flag){
            cout << v.size() << endl;
            for(long i = v.size() - 1; i >= 0; i--){cout << v[i] << ' ';}
            cout << endl;
        }
        else{cout << "-1"<<endl;}
    }

    return 0;
}
