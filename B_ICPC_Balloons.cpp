#include<bits/stdc++.h>
#define ll    long long
#define ull   unsigned long long
#define pb    push_back
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        string s;
        cin >> s; // Read the entire string
        
        unordered_map<char, int> freq;

        for (char ch : s) {
            freq[ch]++;
        }

        int si = 0; 
        int m = 0; 

        for (const auto& pair : freq) {
            if (pair.second == 1) {
                si++;
            } else if (pair.second > 1) {
                m++;
            }
        }
        
        int l = n - (si + m);

        cout << (si + m) * 2 + l << endl;
    } 
    
    return 0;
}
