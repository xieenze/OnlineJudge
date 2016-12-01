#include <stdio.h>
#define ISYEAR(x) x%100!=0&&x%4==0||x%400==0?1:0
//定义宏判断是否是闰年，方便计算每个月的天数
int dayOfMonth[13][2]=
	{
		0,0,
		31,31,
		28,29,
		31,31,
		30,30,
		31,31,
		30,30,
		31,31,
		31,31,
		30,30,
		31,31,
		30,30, 
		31,31
  	};//预存每个月的天数，注意二月配合宏定义作特殊处理
struct Date//日期类，方便日期的推移 
	{
		int Day;
		int Month;
		int Year;
		void nextDay()//计算下一天的日期
		{
			Day++;
			if(Day>dayOfMonth[Month][ISYEAR(Year)])//若日期数超过了当月最大的日数 
			{
				Day=1;
				Month++;
				if(Month>12)
				{
					Month=1;
					Year++;
				 } 
			}
		}				
	};
	int buf[5001][13][32];//保存预处理的天数
	int Abs(int x)//求绝对值
	{
		return x<0? -x:x;	
	}
	int main()
	{
		Date tmp;
		int cnt=0;//天数计数
		tmp.Day=1;
		tmp.Month=1;
		tmp.Year=0;//初始化日期类对象为0年1月1日
		while (tmp.Year!=5001){
			buf[tmp.Year][tmp.Month][tmp.Day]=cnt;
			tmp.nextDay();
			cnt++;
		}	 
		int d1,m1,y1;
		int d2,m2,y2;
		while(scanf("%4d%2d%2d",&y1,&m1,&d1)!=EOF){
			scanf("%4d%2d%2d",&y2,&m2,&d2);
			printf("%d\n",Abs(buf[y2][m2][d2]-buf[y1][m1][d1]+1));
		}
		return 0;
	}	 
