#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkDiv(int iNo)
{
	if(iNo<0)
	{
		return FALSE;
	}
	if((iNo%5)==0)
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
	BOOL Bret=TRUE;
	int iValue=0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	Bret=ChkDiv(iValue);
	if(Bret==TRUE)
	{
		printf("The given number is divisible by 5\n");
	}
	else
	{
		printf("The given number is not divisible by 5\n");
	}

	return 0;
}