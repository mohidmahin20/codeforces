#include<bits/stdc++.h>
#define ll    long long
#define ull   unsigned long long
#define pb    push_back
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int m, k, a, b;
        cin >> m >> k >> a >> b;
        int cnt = 0, ans;
        int u = (k * b) + a;
        
        if (u > m) {
            cout << '0' << endl;
        } else if (a > 0 && b > 0) {
            int y = m - u;
            ans = (y + k - 1) / k;
        } else if (a > 0 && b == 0) {
            ans = (m - a) / k;
        } else if (a == 0 && b > 0) {
            ans = (m - (k * b)) / k;
        } else {
            ans = ceil(m / k);
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
