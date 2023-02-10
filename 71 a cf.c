#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
    {
    int i, n, x, t;

    char c[101];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", &c);
        int l = strlen(c);
        if(l>10)
        {
            printf("%c%d%c\n", c[0], l-2, c[l-1]);
        }
        else printf("%s\n", c);
    }
    return 0;
}
