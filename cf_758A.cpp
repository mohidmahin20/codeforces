#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum=0;
    // Finding the maximum element using std::max_element
    int *maxElement = max_element(arr, arr + n);

    int l=*maxElement;
    for(int i=0;i<n;i++){
        int j=l-arr[i];
        sum=sum+j;
    }
    cout<<sum<<endl;
    return 0;
}
