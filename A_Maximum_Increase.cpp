#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    long long a[t];

    for (int i = 0; i < t; i++) {
        cin >> a[i];  
    }

    long long cnt = 1; 
    long long m = 1;  
    

    for (int i = 0; i < t ; i++) { 
        if (a[i] > a[i - 1]) {
            cnt++;
        }
        else {
            m = max(m, cnt);
            cnt = 1; 
        }
    }

   if(cnt>m)
    m=cnt;


    cout<<m<<endl;

    return 0;

}