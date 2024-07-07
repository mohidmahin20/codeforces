#include <bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define rev(A,N) sort(A,A+N,greater<int>())
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    int t;cin >> t;
   
    while (t--) {
     int n;
        cin >> n;
        vector<ll>a(n);
        unordered_map<ll,ll> cnt;
        for (int i=0;i<n;i++) {
            cin >>a[i];
            cnt[a[i]]++;
        }
        int b=0;
        int c=0;
        for (int i=1;i <= n;i++) {
            if (cnt[i] == 0) {
                c++;
            }
        }
        b = c;
        cout <<b<< endl;
   }     
    return 0;
}
