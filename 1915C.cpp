#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPerfectSquare(long long x) {
    long long sqrtX = (long long)sqrt(x);
    return x == sqrtX * sqrtX;
}

int main() {
    int t;scanf("%d",&t);
    while(t--){
        int n;
    scanf("%d", &n);

    int array[n];
    long long sum = 0;


    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    if (isPerfectSquare(sum)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    }
    return 0;
}
