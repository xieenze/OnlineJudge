#include<stdio.h>
int prime[10000];//保存筛得的素数 
int primeSize;//保存素数的个数 
bool mark[10001]; //若mark[x]为true，则表示该数x已经被标记称非素数
void init()
{
	for(int i=1;i<=10000;i++)
	{
		mark[i]=false;
	}//初始化，所有素数都没有被标记 
	primeSize=0;//素数个数为0
	for (int i=2;i<=10000;i++)
		{
			if(mark[i]==true) continue;//若该数字已经被标记，则跳过
			prime[primeSize++]=i;//否则又新得到一个素数
			for(int j=i*i;j<=10000;j+=i)//将该数的所有倍数标记成非素数 
			{
				mark[j]=true; 
			} 
		}
} 
int main()
{
	init();
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		bool isOutput=false;//表示是否输出了符合的数字
		for(int i=0;i<primeSize;i++)
		{
			if(prime[i]<n&&prime[i]%10==1)
			{
				if(isOutput==false)
				{
					isOutput=true;
					printf("%d",prime[i]);	
				}	
				else printf(" %d",prime[i]);
			}	
		} 
		if(isOutput==false)
		{
			printf("-1\n");//输出-1并换行 
		}
		else printf("\n"); 
	}
	return 0;
}


