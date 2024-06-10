#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

      
        int fav_value = a[f - 1];
        
     
        sort(a.rbegin(), a.rend());
        
        
        int count_greater = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > fav_value) {
                count_greater++;
            }
        }
        
        if (count_greater >= k) {
            cout << "NO" << endl;
        } else if (count_greater + count(a.begin(), a.end(), fav_value) <= k) {
            cout << "YES" << endl;
        } else {
            cout << "MAYBE" << endl;
        }
    }
    return 0;
}
