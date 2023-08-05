#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> arr(3);
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int l=arr[1]-arr[0];
    int h=arr[2]-arr[1];
    cout <<l+h<<endl;
    return 0;
}
