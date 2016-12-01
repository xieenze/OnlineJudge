#include<stdio.h>
#include <windows.h>
#include<math.h>
const double split=0.01;
const int count=200;
const double pi=3.1415926;
const int  interval=300;
int main()
{
	DWORD busyspan[count];//busytimes的数组
	DWORD idlespan[count];//idletime数组
	int half=interval/2;
	double radian=0.0;
	
	for(int i=0;i<count;i++)
	{
		busyspan[i]=(DWORD)(half+(sin(pi*radian)*half));
		busyspan[i]=busyspan[i]/2;
		idlespan[i]=interval-busyspan[i];
		idlespan[i]=idlespan[i]/2;
		radian+=split;//radian每次自加0.01 
	 } 
	DWORD starttime=0;
	int j=0;
	while(true)
	{
		j=j%count;
		starttime=GetTickCount();
		while((GetTickCount()-starttime)<=busyspan[j])
			;
		Sleep(idlespan[j]);
		j++;
	}
	return 0;	
} 
