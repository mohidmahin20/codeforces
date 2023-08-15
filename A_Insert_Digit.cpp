#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, d;
        cin >> n >> d;

        string s;
        cin >> s;

        string result = s;

        for (int i = 0; i < n; ++i) {
            if (s[i] - '0' < d) {
                result = s.substr(0, i) + to_string(d) + s.substr(i);
                break;
            }
        }

        if (result == s) {
            result = s + to_string(d);
        }

        cout << result << endl;
    }

    return 0;
}
