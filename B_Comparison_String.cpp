#include<bits/stdc++.h>
#define ll    long long
#define ull   unsigned long long
#define pb    push_back
using namespace std;
int main(){
     int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int maxx = 1, cur = 1;

        for (int i = 1; i < n; ++i) {
            if (s[i] == s[i - 1]) {
                ++cur;
                maxx = max(maxx, cur);
            } else {
                cur = 1;
            }
        }

        int res = maxx;
        cout << res + 1 << endl;
    } 
    
    return 0;
}