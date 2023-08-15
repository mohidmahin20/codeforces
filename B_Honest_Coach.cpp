#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        
        int a[n];
        for (int j = 0; j < n; j++) {
            cin >> a[j];  
        }
        
        sort(a, a + n);
        int minn = INT_MAX; 
        
        for (int j = 0; j < n - 1; j++) {
            int diff = a[j + 1] - a[j];
            minn = min(minn, diff);
        }
        
        cout << minn << endl;
    }
    
    return 0;
}
