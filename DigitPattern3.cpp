#include<stdio.h>

void DigitPattern3(int iNo)
{
	int iDigit=0;
	int i=0;
	int j=0;
	int temp=iNo;
	int iCnt=0;

	while(iNo!=0)
	{
		iNo=iNo/10;
		iCnt++;
	}
	iNo=temp;
	for(i=1;i<=iCnt;i++)
	{
		for(j=1;j<=i;j++)
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

	DigitPattern3(iValue);
	return 0;
}