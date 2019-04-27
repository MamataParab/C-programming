#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(int iNo,int iNum)
{
	int iDigit=0;

	while(iNo!=0)
	{
		iDigit=iNo%10;
		
		if(iDigit==iNum)
		{
			return TRUE;
			
		}
		iNo=iNo/10;
		
		
	}
}

int main()
{
	int iNo=0;
	int iValue=0;

	BOOL BRet=TRUE;

	printf("Enter the number\n");
	scanf("%d",&iNo);

	printf("Enter the number which need to be checked\n");
	scanf("%d",&iValue);

	BRet=ChkDigit(iNo,iValue);
	if(BRet==TRUE)
	{
		printf("Given digit is present \n");
	}
	else
	{
		printf("Given digit is not present\n");
	}
	return 0;
}