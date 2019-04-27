#include<stdio.h>
int EstimatedCost(int LandSize)
{
	int iResult=0;
	iResult=LandSize*560;
	return iResult;
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	iRet=EstimatedCost(iValue);
	printf("The estimated cost of area is %d\n",iRet);
	return 0;
}