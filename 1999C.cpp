#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        
        vector<pair<int, int>> ar(n);
        for (int i = 0; i < n; i++) {
            cin >> ar[i].first >> ar[i].second;
        }
        
        int flag = 0;
        
       
        if (ar[0].first >= s) {
            flag = 1;
        }
        
        
        for (int i = 1; i < n; i++) {
            if (ar[i].first - ar[i-1].second >= s) {
                flag = 1;
            }
        }
        
        
        if (m - ar[n-1].second >= s) {
            flag = 1;
        }
        
        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
