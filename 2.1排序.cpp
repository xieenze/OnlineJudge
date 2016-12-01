#include <stdio.h>
#include<algorithm>
using namespace std;
bool cmp(int a,int b)
	{
		return a>b;	
	}
int main(){
	int n;
	int m;
	int buf[10000];	
	while(scanf("%d",&n)!=EOF){
		scanf("%d",&m);
		for(int i=0;i<(m+n);i++)
		{
			scanf("%d",&buf[i]);
		}
		sort(buf,buf+n+m,cmp);
		for (int i=0;i<m;i++)
		{
			printf("%d ",buf[i]);
		} 
	}
	return 0;
}
