#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkPrime(int iNo)
{
	int iCnt=0;
	int i=0;

	for(i=2;i<=iNo/2;i++)
	{
		if((iNo%i)==0)
		{
			iCnt++;
		}
	}
	if(iCnt==0)
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
	int iNo=0;
	BOOL BRet=TRUE;

	printf("Enter the number\n");
	scanf("%d",&iNo);
	
	BRet=ChkPrime(iNo);
	if(BRet==TRUE)
	{
		printf("Given number is Prime\n");
	}
	else
	{
		printf("Given number is not Prime\n");
	}
	return 0;
}
