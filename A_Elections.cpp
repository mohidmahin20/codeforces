#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
using namespace std;

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == b && b == c) {
            cout << "1 " << "1 " <<"1" << endl;
        } else {
            int max_val = max(a, max(b, c));
            if(a==max_val && b==max_val){
                cout<<"1 "<<"1 "<<a-c+1<<endl;
            }
            else if(b==max_val && c==max_val){
                cout<<b-a+1<<" 1"<<" 1"<<endl;
            }
            else if(a==max_val && c==max_val){
                cout<<"1 "<<a-b+1<<" 1"<<endl;
            }
            else if (a == max_val) {
                cout << "0 " << a-b + 1 << " " << a-c + 1 << endl;
            } else if (b == max_val) {
                cout << b-a + 1 << " 0 " << b-c + 1 << endl;
            } else {
                cout << c-a + 1 << " " << c-b + 1 << " 0" << endl;
            }
        }
    }

    return 0;
}
