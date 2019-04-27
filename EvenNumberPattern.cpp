#include<stdio.h>
#include<stdlib.h>

void Pattern(int arr[],int Size)
{
	int i=0;
	int j=0;

	for(i=0;i<Size;i++)
	{
		for(j=0;j<Size;j++)
		{
			if((arr[j]%2)==0)
			{
				printf("%d\t",arr[j]);
			}
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