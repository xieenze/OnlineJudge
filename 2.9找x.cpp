#include<stdio.h>
int main()
{
	int n;
	int buf[200];
	while(scanf("%d",&n)!=EOF){
		for (int i=0;i<n;i++)
		{
				
			scanf("%d",&buf[i]);
		}
		//printf("%d",1);
		int x;int ans=-1;
		scanf("%d",&x);
		for (int i=0;i<n;i++)
		{
			if(x==buf[i])
			{
				ans=i;
				break;
			}
		}
		printf("%d\n",ans);
	}
	return 0; 
}
