#include<stdio.h>
typedef unsigned long int UINT;

void DisplayBinary(UINT iNo)
{
	int iDigit=0;

	while(iNo!=0)
	{
		iDigit=iNo%2;
		printf("%d\t",iDigit);
		iNo=iNo/2;
	}
}

int main()
{
	UINT iValue=0;

	printf("Enter the number\n");
	scanf("%u",&iValue);
	DisplayBinary(iValue);

	return 0;
}