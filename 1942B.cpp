#include <bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define rev(A,N) sort(A,A+N,greater<int>())
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    int t;cin >> t;
   
    while (t--) {
       int n;cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int mex = n;
        for(int i = n - 1; i >= 0;i--) {
            if(a[i] > 0) {
                b[i] = (mex - a[i]);
                mex = b[i];
            }
            else {
                b[i] = (mex + abs(a[i]));
            }
        }
        
        for(int i = 0; i < n; ++i) {
            cout << b[i] << " ";
        }
        cout << endl;
        

   }     
    return 0;
}
