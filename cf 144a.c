#include<stdio.h>
#include<string.h>
int main()
{
    int t,a[100],n,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
            if(a[j]=a[j+1]){
                printf("%d",j);
            }
        }
    }


}
