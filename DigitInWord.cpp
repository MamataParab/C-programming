#include<stdio.h>

void DigitInWord(int iNo)
{

	int iDigit=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;

		switch(iDigit)
		{
		case 0:
			printf("Zero\t");
			break;
		
		case 1:
			printf("One\t");
			break;

		case 2:
			printf("Two\t");
			break;

		case 3:
			printf("Three\t");
			break;

		case 4:
			printf("Four\t");
			break;
		
		case 5:
			printf("Five\t");
			break;
		
		case 6:
			printf("Six\t");
			break;
		
		case 7:
			printf("Seven\t");
			break;
		
		case 8:
			printf("Eight\t");
			break;
		
		case 9:
			printf("Nine\t");
			break;
		}
		
		iNo=iNo/10;
	}
}
	

int main()
{
	int iNo=0;
	int iRet=0;
	printf("Enter the number\n");
	scanf("%d",&iNo);

	DigitInWord(iNo);
	printf("Total Summation of digit is %d\n",iRet);

	return 0;
}