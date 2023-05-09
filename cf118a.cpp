#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main(){
    char s[100];
    cin >> s;
    int l=strlen(s);
    
int i=0;
char c;
     while (s[i])
  {
    c=s[i];
    putchar (tolower(c));
    i++;
  }
    for(i=0;i<l;i++){
        if(s[i]== 'a'|| 'b' || 'c'|| 'd' || 'e'){
            continue;
        }
        else{
            cout << "." << i;
        }
    }
    
}