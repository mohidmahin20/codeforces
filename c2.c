#include <stdio.h>
#include <math.h>

long long prime(int n) {
    long long sum = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        int a = i, p = 0;
        while (n % i == 0) {
            p++;
            n /= i;
        }
        if (p != 0) {
            sum += a * p;
        }
    }
    if (n != 1) {
        sum += n;
    }
    return sum;
}

int main() {
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        printf("%lld\n", prime(n));
    }
    return 0;
}
