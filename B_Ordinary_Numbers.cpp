#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int j = 0; j < t; j++) {
        long long n;
        cin >> n;
        long long m,count=0;
       for(int i=1; i<=9; i++)
    	{
    		m=i;
    		while(m<=n)
    		{
    			count++;
    			m=m*10+i;
			}
		}
		cout << count << endl;
    }
    
    return 0;
}
