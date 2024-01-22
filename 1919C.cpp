#include <bits/stdc++.h>
#define ll  long long
using namespace std;
int main() {
    ll t;cin >> t;
    while (t--) {
        ll n;cin >> n;
        ll arr[n];
        for (int i=0;i<n;i++) {
            cin >> arr[i];
        }
        ll a= INT_MAX, b= INT_MAX, cnt= 0;
        for (int i=0;i< n;i++) {
            if (a>b) {
                swap(a,b);
            }
            if(arr[i]<=a) {
                a=arr[i];
            }
            else if(arr[i]<=b){
                b=arr[i];
            }
            else{
                 a=arr[i];
                 cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
