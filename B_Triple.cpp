#include<bits/stdc++.h>
#define ll    long long
#define ull   unsigned long long
#define pb    push_back
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a, a + n,greater<int>());

        bool found = false;
        for (int i = 0; i < n - 2; ++i) {
            if (a[i] == a[i + 1] && a[i + 1] == a[i + 2]) {
                cout << a[i] << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "-1" << endl;
        }
    }

    return 0;
}
