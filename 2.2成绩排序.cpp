#include <stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
struct E
{
	char name[101];
	int age;
	int score;
}
buf[1000];
bool cmp(E a,E b)//实现比较规则 
{
	if(a.score!=b.score)  return a.score<b.score;//若分数不同 则分低者在前
	int tmp=strcmp(a.name,b.name);
	if (tmp!=0) return tmp<0;//若分数相同则名字字典小的在前
	else return a.age<b.age;
	
}
int main()
{
	int n;
	while (scanf("%d",&n)!=EOF)
	{
		for (int i=0;i<n;i++)
		{
			scanf("%s%d%d",buf[i].name,&buf[i].age,&buf[i].score);
		}//输入
		sort (buf , buf+n,cmp);
		for (int i=0;i<n;i++)
		{
			printf("%s%d%d\n",buf[i].name,buf[i].age,buf[i].score);
		}//输出 排序后的结果 
	}
	return 0; 
}
