#include<bits/stdc++.h>
#define ll  long long
#define pb  push_back
#define fastread()   (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main(){
       fastread();
       
    const long N = 2e5 + 7;
    long t; scanf("%ld\n", &t);
    vector<long> pos(N, 0);
    char s; long id;
    scanf("%c %ld\n", &s, &id);
    pos[id] = 0;
    long left(-1), right(1);
    while(--t){
        scanf("%c %ld\n", &s, &id);
        if(s == 'L'){pos[id] = left--;}
        else if(s == 'R'){pos[id] = right++;}
        else if(s == '?'){
            long sl = -1 + pos[id] - left;
            long sr = -1 + right - pos[id];
            printf("%ld\n", (sl < sr) ? sl : sr);
        }
    }
 

    return 0;
}