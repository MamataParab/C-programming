#include<stdio.h>
#include<stdlib.h>
void Pattern(int arr[],int size)
{
	int i=0;
	int j=0;

	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",arr[j]);
		}
		printf("\n");
	}
}

int main()
{
	int iValue=0;
	int *arr=NULL;
	int i=0;

	printf("Enter count of array elements\n ");
	scanf("%d",&iValue);

	arr=(int*)calloc(iValue,sizeof(int));
	printf("Enter actual values of array\n");
	
	for(i=0;i<iValue;i++)
	{
		scanf("%d",&arr[i]);
	}
	Pattern(arr,iValue);
	free(arr);
	return 0;
}
