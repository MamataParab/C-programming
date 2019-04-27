#include<stdio.h>
#include<stdlib.h>

void Arithmatic(int arr[],int size)
{
	int i=0;
	int j=0;
	for(i=0;i<size;i++)
	{
		for(j=1;j<arr[i];j++)
		{
			if((arr[i]%j)==0)
			{
				printf("%d",j);
			}
		}
	}
}

int main()
{
	int Value=0;
	int i=0;
	int *ptr=NULL;

	printf("Enter number\n");
	scanf("%d",&Value);

	int arr[]={0};

	printf("Enter elements of array\n");
	for(i=0;i<Value;i++)
	{
		scanf("%d",&arr[i]);
	}

	Arithmatic(arr,Value);
}


