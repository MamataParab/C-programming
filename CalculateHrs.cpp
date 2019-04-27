#include<stdio.h>

void CalHrs(int Min)
{
	int Time=0;
	int Temp=Min;
	Time=Min/60;
	Temp=Temp%60;

	printf("The time in hours is %d hr and %d min\n",Time,Temp);
	
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter the Kilometer distance\n");
	scanf("%d",&iValue);

	CalHrs(iValue);
	return 0;
}



