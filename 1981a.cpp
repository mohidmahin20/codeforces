#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long l, r;
        cin >> l >> r;

      
        long long max_x = r;

        
        int score = 0;
        while (max_x > 1) {
            max_x /= 2;
            score++;
        }

        cout << score << endl;
    }

    return 0;
}
