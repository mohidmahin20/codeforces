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
        int n, k;
        cin >> n >> k;
        ll res= n*k -(k-1);
        cout <<res<<endl;
    }
    return 0;
}
