#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		int buf1[20],buf2[20],size1=0,size2=0;//用buf1,2保存从两个整数中拆解出的数字位数，其中数量由size1,2表示
		while(a!=0)
		{
			buf1[size1]=a%10;size1++;
			a/=10;
		} 
		while(b!=0)
		{
			buf2[size2]=b%10;size2++;
			b=b/10;
		}
		int ans=0;
		for (int i=0;i<size1;i++)
			for (int j=0;j<size2;j++)
			{
				ans+=buf1[i]*buf2[j];
			}
		printf("%d\n",ans);
	}
	return 0;
}
