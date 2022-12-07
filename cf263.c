#include<stdio.h>
#include<math.h>
 int main()
 {
     int a[5][5];
     int i,j,x,y;
     for (i=0; i<5;i++){
         for( j=0; j<5; j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                x=abs(2-i);
                y=abs(2-j);
                printf("%d",x+y);
            }
         }
     }
return 0;
 }
