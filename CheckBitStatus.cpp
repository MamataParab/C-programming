#include<stdio.h>
typedef unsigned long int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkBitStatus(UINT iNo)
{
	UINT iResult=0;
	UINT iMask=8;

	iResult=iNo|iMask;

	if(iResult==iNo)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}




int main()
{
	UINT iValue=0;
	BOOL Bret=TRUE;


	printf("Enter the number\n");
	scanf("%u",&iValue);
	Bret=ChkBitStatus(iValue);

	if(Bret==TRUE)
	{
		printf("Fourth bit is on\n");
	}
	else
	{
		printf("Fourth bit is off\n");
	}
	return 0;
}
	