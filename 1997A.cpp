#include <bits/stdc++.h>
using namespace std;


int calculate_typing_time(const string& s) {
    if (s.empty()) return 0;
    int time = 2; 
    for (size_t i = 1; i < s.length(); ++i) {
        time += (s[i] == s[i - 1]) ? 1 : 2;
    }
    return time;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        string best;
        int max_time = -1;

       
        for (char c = 'a'; c <= 'z'; ++c) {
            for (int i = 0; i <= n; ++i) {
                string newp = s.substr(0, i) + c + s.substr(i);
                int time = calculate_typing_time(newp);
                if (time > max_time) {
                    max_time = time;
                    best = newp;
                }
            }
        }

        cout << best << endl;
    }
    return 0;
}
