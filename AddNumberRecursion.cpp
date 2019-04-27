#include<stdio.h>
#include<stdlib.h>


int AddNumR(int arr[],int size)
{
	static int Sum=0;
	static int i=0;

	if(i<size)
	{
		Sum=Sum+arr[i];
		i++;
		AddNumR(arr,size);
	}
	return Sum;
}

int main()
{
	int iValue=0;
	int Ret=0;
	int i=0;

	printf("Enter number of array elements\n");
	scanf("%d",&iValue);

	int *brr=NULL;
	brr=(int*)calloc(iValue,sizeof(int));
	printf("Enter actual values\n");

	for(i=0;i<iValue;i++)
	{
		scanf("%d",&brr[i]);
	}

	Ret=AddNumR(brr,iValue);
	printf("Addition of number is %d\n",Ret);
	return 0;
	free(brr);
}


