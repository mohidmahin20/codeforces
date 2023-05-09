#include<stdio.h>
#include<string.h>
int main()
{

    int n,a=0,b=0;
    scanf("%d",&n);
    char arr[n];
    scanf("%s",arr);
    for(int i=0;i<n;i++){

        if(arr[i] =='A'){
            a++;
        }
        else{
            b++;
        }
    }
   if(a>b){
    printf("Anton");

   }
   else if(a==b){
    printf("Friendship");
   }
   else{
    printf("Danik");
   }

}
