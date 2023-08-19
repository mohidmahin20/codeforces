#include<bits/stdc++.h>
#define ll    long long
#define ull   unsigned long long
#define pb    push_back
using namespace std;
int main(){
     int t;cin>>t;
    while (t--) {
        long long n;
        cin >> n;
        
        long long maxx = 0, cnt2 = 0, minn = 1e6, cnt1 = 0;
        
        for (long long i = 0; i < n; i++) {
            long long x;
            cin >> x;
            
            if (x > maxx) {
                maxx = x;
                cnt2 = 1;
            } else if (x == maxx) {
                ++cnt2;
            }

            if (x < minn) {
                minn = x;
                cnt1 = 1;
            } else if (x == minn) {
                ++cnt1;
            }
        }

        long long ans = (minn < maxx) ? (2 * cnt1 * cnt2) : ((n - 1) * n);
        cout << ans << endl;
 
}

    
    return 0;
}