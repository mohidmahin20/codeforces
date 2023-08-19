#include<bits/stdc++.h>
#define ll    long long
#define ull   unsigned long long
#define pb    push_back
using namespace std;
int main(){
     int t;cin>>t;
      while (t--) {
        long n;
        cin >> n;
        vector<long> a(n);

        for (long i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 1) {
                a[i] = 2;
            }
            if (i && a[i] % a[i - 1] == 0) {
                ++a[i];
            }
        }

        for (long i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    } 
    
    return 0;
}