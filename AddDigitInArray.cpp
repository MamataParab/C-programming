#include<stdio.h>

void AddDigit(int arr[],int value)
{
	int i=0;
	int iSum=0;
	int iDigit=0;
	
	for(i=0;i<value;i++)
	{
		while(arr[i]!=0)
		{
			iDigit=arr[i]%10;
			iSum=iSum+iDigit;
			arr[i]=arr[i]/10;
		}
		printf("%d\t",iSum);
		iSum=0;
		
	}

		
}

int main()
{
	int brr[5];
	int i=0;


	printf("Enter the values\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&brr[i]);
	}
	AddDigit(brr,5);

	return 0;
}




	