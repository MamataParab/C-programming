#include<stdio.h>

int CalPower(int iNo1,int iNo2)
{
	int itemp=iNo1;
	int i=0;
	for(i=1;i<iNo2;i++)
	{
		iNo1=iNo1*itemp;
	}
	return iNo1;
}

int main()
{
	int iRet=0;
	int iValue1=0;
	int iValue2=0;

	printf("Enter the number\n");
	scanf("%d",&iValue1);

	printf("Enter the power\n");
	scanf("%d",&iValue2);

	iRet=CalPower(iValue1,iValue2);
	printf("The result is %d\n",iRet);

	return 0;
}
