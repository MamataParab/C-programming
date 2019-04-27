#include<stdio.h>
int AreaSqr(int Side)
{
	int iResult=0;
	iResult=Side*Side;
	return iResult;
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	iRet=AreaSqr(iValue);
	printf("The area of square is %d\n",iRet);
	return 0;
}