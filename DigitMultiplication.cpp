#include<stdio.h>

int MulDigit(int iNo)
{
	int iMul=1;
	int iDigit=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iMul=iMul*iDigit;
		iNo=iNo/10;
	}
	return iMul;
}

int main()
{
	int iNo=0;
	int iRet=0;
	printf("Enter the number\n");
	scanf("%d",&iNo);

	iRet=MulDigit(iNo);
	printf("Total multiplication of digits is %d\n",iRet);

	return 0;
}