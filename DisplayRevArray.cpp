#include<stdio.h>

void DisplayRev(int arr[],int value)
{
	int i=0;
	for(i=value-1;i>=0;i--)
	{
		printf("%d\t",arr[i]);
	}
	
}

int main()
{
	int brr[10];
	int i=0;

	printf("Enter the values\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&brr[i]);
	}
	DisplayRev(brr,10);

	return 0;
}




	