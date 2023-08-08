#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int price,coin,res=1,sum;
     cin >>price >>coin;
      sum=price;
    while(1){
        if(sum%10==0) break;
        if(sum==coin) break;
        else if((sum-coin)>0 && (sum-coin)%10==0) break;
        sum+=price;
        
        res++;
    }
    cout<<res;
    return 0;
}