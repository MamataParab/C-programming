#include<stdio.h>

int DGThan5(int iNo)
{
	int iCnt=0;
	int iDigit=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit>=5)
		{
			iCnt++;
		}

		iNo=iNo/10;
	}
	return iCnt;
}

int main()
{
	int iNo=0;
	int iRet=0;
	printf("Enter the number\n");
	scanf("%d",&iNo);

	iRet=DGThan5(iNo);
	printf("Total Summation of digit is %d\n",iRet);

	return 0;
}