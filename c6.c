#include <bits/stdc++.h>
using namespace std;

int t, n, a[200005];

int main() {
cin >> t;
while (t--) {
cin >> n;
for (int i = 0; i < n; i++) {
cin >> a[i];
}
sort(a, a + n);
int ans = 0;
for (int i = 0; i < n; i += 2) {
ans += a[i];
}
cout << ans << endl;
}
return 0;
}
