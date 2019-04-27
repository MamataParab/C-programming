#include<stdio.h>
#include<stdlib.h>

void Pattern(int arr[],int size)
{
	int i=0;
	int j=0;
	int iDigit=0;
	int iSum=0;

	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			while(arr[i]!=0)
			{
				iDigit=arr[i]%10;
				iSum=iSum+iDigit;
				arr[i]=arr[i]/10;
			}
			arr[i]=iSum;
			printf("%d\t",arr[i]);
			iSum=0;
			iDigit=0;
		}
		printf("\n");
	}
}


int main()
{
	int iValue=0;
	int *brr=NULL;
	int i=0;

	printf("Enter number of elements\n");
	scanf("%d",&iValue);

	brr=(int*)calloc(iValue,sizeof(int));

	printf("Enter actual values");
	for(i=0;i<iValue;i++)
	{
		scanf("%d",&brr[i]);
	}
	Pattern(brr,iValue);

   

	return 0;
}


