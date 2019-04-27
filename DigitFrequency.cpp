#include<stdio.h>

void FrequencyDigit(int iNo)
{
	int i=0;
	int iDigit=0;
	int arr[6];
	int brr[6];

	while(iNo!=0)
	{
		iDigit=iNo%10;
		arr[i]=iDigit;
		i++;
		iNo=iNo/10;
	}

	for(i=0;i<6;i++)
	{
		printf("%d",arr[i]);
	}
}

int main()
{
	FrequencyDigit(234512);
	return 0;
}
