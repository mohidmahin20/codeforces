#include <stdio.h>

int main() {
    int t, n, i, cnt, a[100000];
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        cnt = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (i > 0 && a[i-1] == -1 && a[i] == 1) {
                cnt++;
            }
        }
        printf("%d\n", n - cnt);
    }
    return 0;
}
