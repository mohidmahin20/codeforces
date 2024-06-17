#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> grid(n);
        for (int i = 0; i < n; ++i) {
            cin >> grid[i];
        }
        
        int mnr = n, mxr = 0;
        int mnc = m, mxc = 0;
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == '#') {
                    mnr = min(mnr, i);
                    mxr = max(mxr, i);
                    mnc = min(mnc, j);
                    mxc = max(mxc, j);
                }
            }
        }
        
        int cenr = (mnr + mxr) / 2 + 1; 
        int cenc = (mnc + mxc) / 2 + 1; 
        
        cout << cenr << " " << cenc << endl;
    }
    return 0;
}
