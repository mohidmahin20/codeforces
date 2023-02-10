#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int k = -1;
        for (int i = 1; i < n; i++) {
            int p1 = 1, p2 = 1;
            for (int j = 0; j < i; j++) {
                p1 *= a[j];
            }
            for (int j = i; j < n; j++) {
                p2 *= a[j];
            }
            if (p1 == p2) {
                k = i;
                break;
            }
        }
        printf("%d\n", k);
    }
    return 0;
}
