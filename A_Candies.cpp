#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int m = 1;

        for (int i = 1; i < 50; i++) {
            m = 2 * m + 1;
            if (n % m==1) {
                continue;
            }
            cout << n / m << endl;
            break;
        }
    }

    return 0;
}
