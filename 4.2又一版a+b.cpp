#include<stdio.h>

int main()
{
	int i=0;
	int d[50]={0};
	int m,a,b,c;
	while(scanf("%d",&m)!=EOF)
	{	
		if (m==0) break;
		scanf("%d%d",&a,&b);	
		c=a+b;
		while(c/m!=0)
		{
			d[i++]=c%m;
			c=c/m;
		}
		//printf("111");
		d[i++]=c%m;	
	}
//	printf("111");
	for(int j=i-1;j>=0;j--)
	{
		printf("%d",d[j]);
	}
	return 0;
}
