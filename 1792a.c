#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
        int  b=0, a ,n;
scanf("%d",&n);
for(int i=0;i<n;i++){

scanf("%d",&a);
if (a==1){
    b++;
}
}
printf("%d\n",n-(b/2));
}
}
