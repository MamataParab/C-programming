#include<stdio.h>

typedef int BOOL;
typedef unsigned long int UINT;
#define TRUE 1
#define FALSE 0

BOOL ChkStatus(UINT iNo)
{
	UINT Result=0;
	UINT iMask=0x00010000;

	Result=iNo&iMask;
	if(iMask==Result)
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
	UINT Ret=0;

	printf("Enter the number\n");
	scanf("%u",&iValue);

	Ret=ChkStatus(iValue);

	if(Ret==TRUE)
	{
		printf("17th bit is ON\n");
	}
	else
	{
		printf("17th bit is OFF\n");
	}


	
	return 0;
}


