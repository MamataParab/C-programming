#include<stdio.h>

int NearestNum(int arr[],int value)
{
	int i=0;
	int Near=arr[0]-90;
	int iDiff=0;

	for(i=0;i<value;i++)
	{
		iDiff=arr[i]-90;
		if(iDiff<Near)
		{
			Near=iDiff;
		}
	}
	return Near;
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
	iRet=NearestNum(brr,5);
	printf("Nearest element is %d\t",iRet);

	return 0;
}




	