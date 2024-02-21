#include <bits/stdc++.h>
#define ll long long
using namespace std;


int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;  
        n /= 10;      
    }
    return sum;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    ll t; cin >> t;
    
    
    vector<int> precomputedSum(1000001, 0);
    for (int i = 1; i <= 1000000; i++) {
        precomputedSum[i] = precomputedSum[i - 1] + sumOfDigits(i);
    }

    while (t--) {
        int n; cin >> n;
        cout << precomputedSum[n] << endl; 
    }
    return 0;
}
