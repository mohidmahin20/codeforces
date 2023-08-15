#include <bits/stdc++.h>
using namespace std;
int main() {
   int t;cin>>t;
   for(int h=0;h<t;h++){
     int n;
    cin >> n;

    vector<double> numbers(n);

    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    if (numbers.empty()) {
    } else {
        double max_value = *max_element(numbers.begin(), numbers.end());
        double min_value = *min_element(numbers.begin(), numbers.end());
        double reslt = max_value - min_value;   
        cout << reslt << endl;
    }
   }

    return 0;
}
