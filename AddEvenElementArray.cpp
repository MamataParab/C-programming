#include<stdio.h>

int AddEven(int arr[],int value)
{
	int i=0;
	int iSum=0;

	for(i=0;i<value;i++)
	{
		if((arr[i]%2)==0)
		{
			iSum=iSum+arr[i];
		}
	}
	return iSum;
}

int main()
{
	int brr[5];
	int i=0;
	int iRet=0;

	printf("Enter the values\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&brr[i]);
	}
	iRet=AddEven(brr,5);
	printf("Summation of even number is %d\t",iRet);

	return 0;
}




	