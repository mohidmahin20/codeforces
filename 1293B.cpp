#include<math.h>
#include<stdio.h>
int main()
{
    float b,c,sum=0;
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        sum=sum+(1.0/i);
        
    }
    printf("%lf",sum);
    return 0;
}

