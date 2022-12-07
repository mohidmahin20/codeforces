#include<bits/stdc++.h>
#define int long long int
#define space << " " <<
#define mod 1000000007

using namespace std;

int32_t main()
{
    int t,i,k,j;
    cin >> t;
    while(t--){
        int n,d,k,i,j;
        cin >> d >> n >> k;
        vector <vector<int >>v(d+1);
        for(i=1; i<=n; i++){
            int p,s,e;
            cin >> p >> s >> e;
            for(j=s; j<=e; j++){
                v[j].push_back(p);
            }
        }
        for(i=1; i<d+1; i++){
            sort(v[i].rbegin(),v[i].rend());
        }
                int ans=0;
        for(i=1; i<d+1; i++){
            int q=0;
            for(j=0; j<v[i].size() && j<k; j++){
                q+=v[i][j];
            }
            ans=max(ans,q);
        }
        cout << ans << endl;
    }
    return 0;
}
