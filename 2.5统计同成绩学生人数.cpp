#include<stdio.h>
int main(){
	int n;
	int Hash[101]={0};
	while(scanf("%d",&n)!=EOF&&n!=0){
		
		for(int i=0;i<n;i++)
		{
			int x;
			scanf("%d",&x);
			Hash[x]++;//统计出现分数的次数 
		}

	}
	int x;
	scanf ("%d",&x);
	printf("%d\n",Hash[x]); 	
	
	return 0;
} 


