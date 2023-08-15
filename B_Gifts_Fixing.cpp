#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;
    cin >> t;
    for (long long cs = 1; cs <= t; cs++) {
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);

        vector<long long> ans;
        for (long long i = n - 1, j = 0; j <= i; i--, j++) {
            if (i == j) {
                ans.push_back(a[i]);
                break;
            }
            ans.push_back(a[j]);
            ans.push_back(a[i]);
        }

        reverse(ans.begin(), ans.end());
        for (long long i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
