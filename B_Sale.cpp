#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int cnt = 0, c = 0;
    for (int i = 0; i < n; i++){
        if (a[i] < 0){
            cnt = cnt + a[i];
            c++;
        }
        
        if (c == m){
            break;
        }
    }
    
    cout << -cnt;
    
    return 0;
}
