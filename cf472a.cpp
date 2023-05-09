#include<iostream>
using namespace std;
int isPrime(int n);
int i;
int main(){
    long long int a,b,n;
    cin>> n;
    a=4;
    b=n-4;
    for(i=1;i<=n;i++){
        int m=isPrime(a);
        int n=isPrime(b);
        if(n==1 && m==1){
            cout << a <<" "<< b<<endl;
            return 0;
        }
        a++;
        b--;
    }

}
int isPrime(int k){
    for(i=2;i<k;i++){
        if(k%i==0){
            return 1;
        }
    }
    return 0;
}