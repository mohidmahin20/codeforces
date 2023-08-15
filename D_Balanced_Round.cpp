#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int cnt = 1;
        int maxCnt = 1;
        
        for (int i = 1; i < n; ++i) {
            if (a[i] - a[i - 1] <= k) {
                ++cnt;
                maxCnt = max(maxCnt, cnt);
            } else {
                cnt = 1;
            }
        }
        
        cout << n - maxCnt << endl;
    }

    return 0;
}
