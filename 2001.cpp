#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--) {
        int n;
        cin >> n; 
        vector<int> a(n);

      
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

       
        unordered_map<int, int> freq;
        for (int num : a) {
            freq[num]++;
        }

      
        int max_count = 0;
        for (const auto& entry : freq) {
            if (entry.second > max_count) {
                max_count = entry.second;
            }
        }

      
        int min_operations = n - max_count;
        cout << min_operations << endl;
    }

    return 0;
}
