#include<stdio.h>
#include<string.h>
int main()
{

    int x=0,i,n;
    char s[10];
    scanf("%d",&n);
   while(n--){
    scanf("%s",&s);
     if (s[1] == '+')
        {
            ++x;
        }
        else
        {
            --x;
        }
   }
   printf("%d",x);
}
