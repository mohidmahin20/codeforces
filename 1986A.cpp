#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define rev(A, N) sort(A, A + N, greater<int>())
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
         int a[3];
        cin>>a[0] >>a[1] >>a[2];
        sort(a,a+3);
        int b= a[1]; 
        int res=abs(b-a[0])+abs(b - a[1])+ abs(b - a[2]);
        cout << res << endl;
        
    }
    return 0;
}
