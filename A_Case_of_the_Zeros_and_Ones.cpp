#include<bits/stdc++.h>
#define ll    long long
#define ull   unsigned long long
#define pb    push_back
using namespace std;

int main() {
    int n, cnt1 = 0, cnt2 = 0;
    cin >> n;

    string s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    for (int i = 0; i < n; i++) {
        for (char c : s[i]) {
            if (c == '0') cnt1++;
            else if (c == '1') cnt2++;
        }
    }

    int diff = abs(cnt1 - cnt2);
    cout << diff << endl;

    return 0;
}
