#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define rev(A, N) sort(A, A + N, greater<int>())
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        ll d1 = x1 - y1;
        ll d2 = x2 - y2;
        
        
        if ((d1 > 0 && d2 > 0) || (d1 < 0 && d2 < 0) || (d1 == d2)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
