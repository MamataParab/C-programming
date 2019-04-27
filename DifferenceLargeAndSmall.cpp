#include<stdio.h>

int DiffLargeSmall(int iNo)
{
	int iDigit=0;
	int iMin=9;
	int iMax=0;
	int iDiff=0;

	while(iNo!=0)
	{
			iDigit=iNo%10;
		if(iDigit<iMin)
		{
			iMin=iDigit;
		}
		else if(iDigit>iMax)
		{
			iMax=iDigit;
		}
		iDiff=iMax-iMin;
		iNo=iNo/10;
	}
	
	return iDiff;
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	iRet=DiffLargeSmall(iValue);
	printf("The difference is %d\n",iRet);
	return 0;
}



