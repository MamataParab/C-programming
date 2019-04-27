#include<stdio.h>

int CalMinutes(int Hrs)
{
	int Time=0;
	Time=Hrs*60;
	return Time;
	
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter the Kilometer distance\n");
	scanf("%d",&iValue);

	iRet=CalMinutes(iValue);
	printf("The time in minute is %d\n",iRet);
	return 0;
}



