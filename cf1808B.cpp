#include<bits/stdc++.h>

using namespace std;
int t,n,k,d,w,a[200005],ans;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d",&n,&k,&d,&w);
		for(int i=1;i<=n;++i)	scanf("%d",&a[i]);
		ans=0;
		for(int i=1,j;i<=n;++i)
		{
			for(j=1;j<=k;++j)
				if(a[i]+w+d<a[j+i-1])
					break;
			ans++;
			j--;
			i=i+j-1;
		}
		printf("%d\n",ans);
	}
	return 0;
}


 				  	  	 	 		 				 	 		 		 	