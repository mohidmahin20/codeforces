#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
    freopen("input1.txt","r",stdin);
    freopen("output1.txt","w",stdout);
#endif

   int t; cin >> t;
    while (t--) {
        int n;cin>> n;
        string a,b,c;
        cin >>a>>b>>c;

        bool flag = 0;
        for (int i= 0;i <n;i++) {
            if (c[i]!=a[i] && c[i] !=b[i]) {
                flag = 1;
                break;
            }
        }
        if (flag) cout << "YES" << endl;
        else  cout << "NO" << endl;
    }

  return 0;
}
