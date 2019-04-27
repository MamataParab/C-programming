#include<stdio.h>

void CountDigit(int arr[],int value)
{
	int i=0;
	int iCnt=0;
	int iDigit=0;
	
	for(i=0;i<value;i++)
	{
		while(arr[i]!=0)
		{
			iDigit=arr[i]%10;
			iCnt++;
			arr[i]=arr[i]/10;
		}
		printf("%d\t",iCnt);
		iCnt=0;
		
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
	CountDigit(brr,5);

	return 0;
}




	