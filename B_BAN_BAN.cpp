#include <iostream>
#include <vector>

#define sz(x) (int)x.size()

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        int k = n * 3;
        int x = 2, y = k;
        
        vector<pair<int, int>> ans;
        while (x < y) {
            ans.emplace_back(x, y);
            x += 3;
            y -= 3;
        }
        
        cout << sz(ans) << '\n';
        for (auto &p : ans) {
            cout << p.first << ' ' << p.second << '\n';
        }
    }

    return 0;
}
