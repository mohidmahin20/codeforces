#include <bits/stdc++.h>

using namespace std;

int main() {
    int           t, q;
    int ans[10000];
    cin >> t;
    ans[1]    = 1;
    ans[11]   = 3;
    ans[111]  = 6;
    ans[1111] = 10;
    ans[2]    = 11;
    ans[22]   = 13;
    ans[222]  = 16;
    ans[2222] = 20;
    ans[3]    = 21;
    ans[33]   = 23;
    ans[333]  = 26;
    ans[3333] = 30;
    ans[4]    = 31;
    ans[44]   = 33;
    ans[444]  = 36;
    ans[4444] = 40;
    ans[5]    = 41;
    ans[55]   = 43;
    ans[555]  = 46;
    ans[5555] = 50;
    ans[6]    = 51;
    ans[66]   = 53;
    ans[666]  = 56;
    ans[6666] = 60;
    ans[7]    = 61;
    ans[77]   = 63;
    ans[777]  = 66;
    ans[7777] = 70;
    ans[8]    = 71;
    ans[88]   = 73;
    ans[888]  = 76;
    ans[8888] = 80;
    ans[9]    = 81;
    ans[99]   = 83;
    ans[999]  = 86;
    ans[9999] = 90;
    while (t--) {
        cin >> q;
        cout << ans[q] << endl;
    }
    return 0;
}