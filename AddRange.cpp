#include<stdio.h>

int AddRange(int iStart,int iEnd)
{
	int i=0;

	for(i=-1;i<=iEnd;i++)
	{
		iStart=iStart+i;
	}
	return iStart;
}

int main()
{
	int iRet=0;
	int iValue1=0;
	int iValue2=0;

	printf("Enter the starting value\n");
	scanf("%d",&iValue1);

	printf("Enter the ending value\n");
	scanf("%d",&iValue2);

	iRet=AddRange(iValue1,iValue2);
	printf("Addition of values between range is %d\n",iRet);
	return 0;
}

