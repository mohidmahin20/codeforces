#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    string s2;
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";

    cin >> c;
    cin >> s2;

    string s3;
    int len = s2.length();
    for (int i = 0; i < len; i++) {
        int ind = s.find(s2[i]);
        if (c == 'R') {
            s3 += s[ind - 1];
        } else {
            s3 += s[ind + 1];
        }
    }

    cout << s3;

    return 0;
}
