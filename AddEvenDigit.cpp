#include<stdio.h>

int AddEvenDigit(int iNo)
{
	int iSum=0;
	int iDigit=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if((iDigit%2)==0)
		{
			iSum=iSum+iDigit;
		}

		iNo=iNo/10;
	}
	return iSum;
}

int main()
{
	int iNo=0;
	int iRet=0;
	printf("Enter the number\n");
	scanf("%d",&iNo);

	iRet=AddEvenDigit(iNo);
	printf("Total Summation of even digit is %d\n",iRet);

	return 0;
}