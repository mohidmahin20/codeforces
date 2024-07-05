#include <iostream>
#include <map>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    
    int t;
    cin >> t;
   
    while (t--) {
        int n;
        cin >> n;
        map<int, int> a;
        
        while(n--) {
            int b;
            cin >> b;
            a[b]++;
        }
        
        int cnt = 0;
        for(auto [k, v] : a) {
            cnt += v / 3;
        }
        
        cout << cnt << endl;
    }     
    return 0;
}
