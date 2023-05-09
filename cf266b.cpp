#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    int n,t;
    cin >> n >> t;
    char s[n];
    cin >> s;
   for(int i=0;i<n;i++){
    if (s[i] =='B' && s[i+1] =='G'){
        char tmp=s[i];
        s[i]=s[i+1];
        s[i+1]=tmp;
    }
   }
   cout << s << endl;
    
    

    return 0;
}
