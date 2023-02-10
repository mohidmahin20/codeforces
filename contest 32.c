#include <stdio.h>

int sumofd(int n) {
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
    while (t--) {
        int n;
        scanf("%d", &n);
        int x = n / 2;
        int y = n - x;
        int sumx = sumofd(x);
        int sumy = sumofd(y);
        while (sumx != sumy && sumx + 1 != sumy && sumx - 1 != sumy) {
            x--;
            y = n - x;
            sumx = sumofd(x);
            sumy = sumofd(y);
        }
        printf("%d %d\n", x, y);
    }
    return 0;
}
