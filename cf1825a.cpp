#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(const string& s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int subsequence(const string& s) {
    int n = s.length();
    for (int j = n - 1; j > 0; j--) {
        for (int i = 0; i + j <= n; i++) {
            string sub = s.substr(i, j);
            if (!is_palindrome(sub)) {
                return j;
            }
        }
    }
    return -1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int len = subsequence(s);
        cout << len << endl;
    }

    return 0;
}
