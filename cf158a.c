#include<stdio.h>
int main()
{
int a[50],n,k,i,count=0,p;
scanf("%d %d",&n,&k);
for (i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    if(a[i]> 0 && a[i] >= a[k-1])
        count++;
}
printf("%d",count);
return 0;
}
