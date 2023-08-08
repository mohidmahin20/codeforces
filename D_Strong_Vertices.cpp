#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;cin>>t;
   for(int i=0;i<t;i++){
        int n;
    cin >> n;

    vector<int> arr1(n);
    vector<int> arr2(n);
    vector<int> result(n);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    for (int i = 0; i < n; i++) {
        result[i] = arr1[i] - arr2[i];
    }
    int max = result[0];
    int maxCnt = 1;
    vector<int> maxInd = {0};

    for (int i = 1; i < n; i++) {
        if (result[i] > max) {
            max = result[i];
            maxCnt = 1;
            maxInd.clear();
            maxInd.push_back(i);
        } else if (result[i] == max) {
            maxCnt++;
            maxInd.push_back(i);
        }
    }

    cout << maxCnt << endl;

   
    for (int index : maxInd) {
        cout << index+1 << " ";
    }
    cout<<endl;
   }
  cout<<endl;

    return 0;
}