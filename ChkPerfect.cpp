#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkPerfect(int iNo)
{
	int iSum=0;
	int i=0;

	for(i=1;i<=iNo/2;i++)
	{
		if((iNo%i)==0)
		{
			iSum=iSum+i;
		}
	}
	if(iSum==iNo)
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
	
	BRet=ChkPerfect(iNo);
	if(BRet==TRUE)
	{
		printf("Given number is Perfect\n");
	}
	else
	{
		printf("Given number is not Perfect\n");
	}
	return 0;
}
