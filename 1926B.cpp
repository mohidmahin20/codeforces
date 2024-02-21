#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    ll t;cin >> t;
    while (t--) {
        int n;cin >> n;
        vector<string> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        bool flag=0;

        for (int i = 0; i < n; ++i) {
            int cnt = 0;
            for (int j = 0; j < n; ++j) {
                if (a[i][j] == '1') {
                    cnt++;
                }
            }
            if (cnt == 1) {
                flag = 1;
                break;
            }
        }

        if (flag) {
            cout << "TRIANGLE" << endl;
        } else {
            cout << "SQUARE" << endl;
        }
    }
    return 0;
}
