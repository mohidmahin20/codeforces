#include<stdio.h>
int main()
{

    int t,n,s=0,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        s=s+n;
    }
    if(s == 0){
        printf("Easy");
    }
    else{
        printf("hard");
    }
}
