#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;

        
        unordered_map<char, int> frequency;
        for (char c : a) {
            frequency[c]++;
        }

     
        int cnt = 0;

        
        for (char s = 'A'; s <= 'G'; s++) {
            int r = m; 
            int available = frequency[s];  

            if (available < r) {
                cnt += (r- available);
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
