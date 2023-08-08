#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
     
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int j = 0; j < n; j++){
            cin >> arr[j];
        }
        
        for(int j = 0; j < n; j++){
            if(j == 0 && arr[j] != arr[j+1] && arr[j] != arr[j+2]){
                cout << (j+1) << endl;
                break;
            }
            if(j == 0 && arr[j] != arr[j+1] && arr[j] == arr[j+2]){
                continue;
            }
            if(j == n-1){
                cout << (j+1) << endl;
                break;
            }
            if(arr[j] != arr[j+1] && arr[j] != arr[j-1]){
                cout << (j+1) << endl;
                break;
            }
        }
    }
    
    return 0;
}
