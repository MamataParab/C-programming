#include<stdio.h>
#include<stdlib.h>

int DigitCountR(int iNo)
{
	static int iCnt=0;
	if(iNo!=0)
	{
		iNo=iNo/10;
		iCnt++;
		DigitCountR(iNo);
	}
	return iCnt;
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	iRet=DigitCountR(iValue);
	printf("The count of digit is %d\n",iRet);

	return 0;
}
