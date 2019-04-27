#include<stdio.h>
int AddNum(int iNo)
{
	int iSum=0;
	int i=0;

	for(i=1;i<=iNo;i++)
	{
		iSum=iSum+i;
	}
	return iSum;
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter the number\n");
	scanf("%d",&iValue);

	iRet=AddNum(iValue);
	printf("Addition of number is %d\n",iRet);

	return 0;
}
