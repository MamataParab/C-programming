#include<stdio.h>

int LargestComFactor(int iNo1,int iNo2)
{
	int i=0;
	int Fact=0;
	int arr[10]={0};
	int Large=arr[0];
	int j=0;

	
	for(i=1,j=0;((i<=iNo1/2)&&(i<=iNo2/2)),j<10;i++,j++)
	{
		if(((iNo1%i)==0)&&(iNo2%i)==0)
		{
			arr[j]=i;
		}
	}

	for(i=0;i<10;i++)
	{
		if(arr[i]>=Large)
		{
			Large=arr[i];
		}
	}
	return Large;
}

int main()
{
	int iRet=0;
	int iValue1=0;
	int iValue2=0;

	printf("Enter the first number\n");
	scanf("%d",&iValue1);

	printf("Enter the second number\n");
	scanf("%d",&iValue2);

	iRet=LargestComFactor(iValue1,iValue2);
	printf("Largest common factor is %d\n",iRet);
	return 0;
}

