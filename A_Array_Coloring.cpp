#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int cnt1 = 0, cnt2 = 0, a[n];
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            if (a[j] % 2 == 0) {
                cnt1++;
            } else {
                cnt2++;
            }
        }

        if (cnt1 %cnt2==0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
