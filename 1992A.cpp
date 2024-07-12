#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        vector<int> nums = {a, b, c};
        int moves = 5;

        while (moves > 0) {
            sort(nums.begin(), nums.end());
            nums[0]++;
            moves--;
        }

        int result = nums[0] * nums[1] * nums[2];
        cout << result << endl;
    }

    return 0;
}
