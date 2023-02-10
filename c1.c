#include <stdio.h>
int main() {
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i <=t; i++) {
        scanf("%d", &n);
        pair(n);


    }
    return 0;
}
void pair(int n){
      for (int x = 1; x <= n; x++) {
        for (int y = 1; y <= n; y++) {
            if (x * y * (x + y) == n) {
                printf("%d %d\n", x, y);
                return;
            }

            }

    }
        printf("-1\n");

}
