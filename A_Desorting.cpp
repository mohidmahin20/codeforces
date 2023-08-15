#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

   for(int i=0;i<t;i++) {
        int n;
        cin >> n;
        int a[n];
        int minDiff = INT_MAX;;
        cin >> a[0];

        for (int j = 1; j < n; j++) {
            cin >> a[j];
            minDiff = min(a[j] - a[j - 1], minDiff);
        }

        if (minDiff < 0) {
            cout << 0 << endl;
        } else {
            cout << minDiff / 2 + 1 << endl;
        }
    }

    return 0;
}
