#include <stdio.h>
#include <string.h>

int t, n;
char s[2010];

int main() {
    scanf("%d", &t);
    while(t--) {
        scanf("%d%s", &n,&s);
        int i = 0, j = n - 1, ans = 0;
        while(i <= j) {
            while(i <= j && s[i] == '0') i++;
            while(i <= j && s[j] == '1') j--;
            if(i <= j) {
                i++;
                j--;
                ans += 2;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
