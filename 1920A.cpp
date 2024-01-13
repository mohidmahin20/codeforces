#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

#ifndef ONLINE_JUDGE
	freopen("input1.txt","r",stdin);
	freopen("output1.txt","w",stdout);
#endif
ll t;cin>>t;
    while(t--)
    {
    	int n;cin >> n;

        int minUp = 1e9;  
        int maxLb = 1;    
        vector<int> v;
        for (int i = 0; i < n; i++) {
            int a, x;
            cin >> a >> x;

            if (a == 1) {
                maxLb = max(maxLb, x);
            } else if (a == 2) {
                minUp = min(minUp, x);
            } else if (a == 3) {
                v.push_back(x);
            }
        }

        if (maxLb > minUp) {
            cout << "0"<<endl;
        } else {
            int cnt = minUp - maxLb + 1;
            for (int num : v) {
                if (num >= maxLb && num <= minUp) {
                    cnt--;
                }
            }
            cout << cnt << endl;
        }
        
    }
  return 0;
}
