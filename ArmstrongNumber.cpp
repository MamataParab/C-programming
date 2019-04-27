#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ArmstrongNum(int iNo)
{
	int itemp=iNo;
	int iDigit=0;
	int iCnt=0;
	int i=0;
	int iMul=1;
	int iSum=0;


	while(iNo!=0)
	{
		iNo=iNo/10;
		iCnt++;
	}
	iNo=itemp;

	while(iNo!=0)
	{
		iDigit=iNo%10;
		for(i=1;i<=iCnt;i++)
		{
			iMul=iMul*iDigit;
		}
		iSum=iSum+iMul;
		iMul=1;
		iNo=iNo/10;
	}
	if(iSum==itemp)
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
	int iValue=0;
	BOOL Bret=TRUE;
	printf("Enter the number\n");
	scanf("%d",&iValue);

	Bret=ArmstrongNum(iValue);
	if(Bret==TRUE)
	{
		printf("Given number is an Armstrong number\n");
	}
	else
	{
		printf("Given number is not an armstrong number\n");
	}
	return 0;
}


