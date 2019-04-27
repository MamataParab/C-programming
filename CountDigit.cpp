#include<stdio.h>

int CountDigit(int iNo)
{
	int iCnt=0;
	while(iNo!=0)
	{
		iNo=iNo/10;
		iCnt++;
	}
	return iCnt;
}

int main()
{
	int iNo=0;
	int iRet=0;
	printf("Enter the number\n");
	scanf("%d",&iNo);

	iRet=CountDigit(iNo);
	printf("Total number of digit is %d\n",iRet);

	return 0;
}