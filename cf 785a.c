#include<stdio.h>
#include<string.h>
int main()
{
int i,a,count=0;
scanf("%d",&a);
char k[100];
for( i=0; i<=a ; i++){
scanf("%c",&k[i]);
if(k[i]== 'Tetrahedron'){
    count+=4;
}
else if(k[i]=='Cube'){
    count+=6;
}
else if(k[i]=='Octahedron'){
    count+=8;
}
else if(k[i]=='Dodecahedron'){
    count+=12;
}
else if(k[i]=='Icosahedron'){
    count+=20;
}
}
printf("%d\n",count);
return 0;
}
