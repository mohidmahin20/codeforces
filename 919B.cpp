#include<bits/stdc++.h>
using namespace std;
int Sum(int n)
{
   int sum = 0;
   while (n != 0)
   {
       sum = sum + n % 10;
       n = n/10;
   }
   return sum;
}
int main(){

#ifndef ONLINE_JUDGE
	freopen("input1.txt","r",stdin);
	freopen("output1.txt","w",stdout);
#endif
int n,i,x,cnt=0;
    cin>>n;
    for(i=1;;i++)
    {
        x=Sum(i);
 
        if(x==10)
        {
            cnt++;
        }
        else if(cnt==n) break;
        
    }
    cout<<i-1;

}
