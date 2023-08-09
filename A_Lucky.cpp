#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;cin>>t;
    for(int i=0;i<t;i++){
        string a;
   
    cin >> a;
    int sum1 = (a[0] - '0') + (a[1] - '0') + (a[2] - '0');
    int sum2 = (a[3] - '0') + (a[4] - '0') + (a[5] - '0');

    if (sum1 == sum2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    }

    return 0;
}
