#include<stdio.h>
#include<algorithm>
using namespace std;
struct program
{
	int Ti_s;
	int Ti_e;
	bool operator < (const program &A)const
	{
		return Ti_e<A.Ti_e;
	}
}buf[100];
int main()
{
	int n;
	while (scanf("%d",&n)!=EOF)
	{
		//if(n==0) break;
		for (int i=0;i<n;i++)
		{
			scanf("%d%d",&buf[i].Ti_s,&buf[i].Ti_e);
		}
		sort(buf,buf+n);
 		int currenttime=0;int ans=0;
		for (int i=0;i<n;i++)
		{
			if (currenttime<=buf[i].Ti_s)
			{
				currenttime=buf[i].Ti_e;
				ans++;	
			}
		}
		int a;
		printf("ÇëÊäÈëa\n");
		scanf("%d",&a);	
		if(a==0)
		{
			printf("%d\n",ans);	
		}
		printf("%d\n",ans);	
	}
	return 0;
}
