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
    string s;
        cin >> s;

        int cnt1 = 0, cnt2 = 0;
        for (char c : s) {
            if (c == 'A') {
                cnt1++;
            } else if (c == 'B') {
                cnt2++;
            }
        }

        if (cnt1 > cnt2) {
            cout << "A" << endl;
        } else {
            cout << "B" << endl;
        }
    }
    return 0;
}
