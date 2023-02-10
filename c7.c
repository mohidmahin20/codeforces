
#include <stdio.h>
#include <string.h>

int sum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int t;
    scanf("%d", &t);

    int n, q;
    int a[200005];
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &n, &q);

        for (int j = 0; j < n; j++) {
            scanf("%d", &a[j]);
        }

        int type, l, r, x;
        for (int j = 0; j < q; j++) {
            scanf("%d", &type);
            if (type == 1) {
                scanf("%d %d", &l, &r);
                for (int k = l - 1; k <= r - 1; k++) {
                    a[k] = sum(a[k]);
                }
            } else if (type == 2) {
                scanf("%d", &x);
                printf("%d\n", a[x - 1]);
            }
        }
    }

    return 0;
}
