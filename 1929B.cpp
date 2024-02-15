#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    ll t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int r= 0;
        if (((4 * n) - 2) == k) {
            r= (int)ceil(k / 2.0) + 1;
        } else {
            r= (int)ceil(k / 2.0);
        }

        cout << r << endl;
    }
    return 0;
}
