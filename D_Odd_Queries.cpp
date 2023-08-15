#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
         int q;
        cin >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

       

        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;

        for (int i = l-1; i < r; i++) {
                a[i] = k;
            }
             int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }

        cout << sum << endl;
        if(sum%2==0){
            cout<<"NO"<<endl;
        }
        else{
            cout <<"YES"<<endl;
        }
        }

       
    }

    return 0;
}
