#include<stdio.h>

void DigitPattern2(int iNo)
{
	int iDigit=0;
	int i=0;
	int j=0;
	int temp=iNo;
	int iCnt=0;
	int iRev=1;
	int arr

	while(iNo!=0)
	{
		iNo=iNo/10;
		iCnt++;
	}
	iNo=temp;
	for(i=1;i<=iCnt;i++)
	{
		while(iNo!=0)
		{
			iDigit=iNo%10;
			printf("%d\t",iDigit);
			iNo=iNo/10;
		}
		printf("\n");
		iNo=temp;
	}
}

int main()
{
	int iValue=0;

	printf("Enter a number\n");
	scanf("%d",&iValue);

	DigitPattern2(iValue);
	return 0;
}