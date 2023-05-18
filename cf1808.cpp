#include<bits/stdc++.h>
using namespace std;
int t,l,r;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>l>>r;	
		int diff=0,ans=0;
		
		for(int i=l;i<=min(r,l+100);i++)
		{
			int I=i,mx=0,mn=9;
			while(I!=0)
			{

				mx=max(I%10,mx);
				mn=min(I%10,mn);
			
				I=I/10;
			}
			
			if(mx-mn>=diff) diff=mx-mn,ans=i;
		}
		cout<<ans<<endl;
	}
	return 0;
}
	 		  		   		    		    	    		