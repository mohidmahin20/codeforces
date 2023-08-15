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
        
        bool flag = 1;
        sort(a, a + n);
        
        for (int j = 0; j < n - 1; j++) {  
            if (a[j + 1] - a[j] > 1) {
                flag = 0;
                break;
            }
        }
        
        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
