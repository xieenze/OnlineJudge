#include<stdio.h>
int main(){
	int h;
	scanf("%d",&h);
	int j=3*h-2;
	int k=2*h-1;
	for (int i=1;i<=h;i++)
	{
		for(int a=1;a<=j;a++)
		{
			if(a<k-2*(i-1))
			printf(" ");
			else printf("*");
		}
		printf("\n");
			
	}
	return 0;
}
