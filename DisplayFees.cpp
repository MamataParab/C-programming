#include<stdio.h>

void DisplayFees(int Std)
{
	switch(Std)
	{
	case 1:
		printf("Fees is 2000\n");
		break;

	case 2:
		printf("Fees is 4000\n");
		break;

	case 3:
		printf("Fees is 6000\n");
		break;

	case 4:
		printf("Fees is 8000\n");
		break;

	case 5:
		printf("Fees is 10000\n");
		break;

	case 6:
		printf("Fees is 12000\n");
		break;

	case 7:
		printf("Fees is 14000\n");
		break;

	case 8:
		printf("Fees is 16000\n");
		break;

	case 9:
		printf("Fees is 18000\n");
		break;

	case 10:
		printf("Fees is 20000\n");
		break;

	default:
		printf("Wrong choice\n");
		break;

	}
}


int main()
{
	int iValue=0;

	printf("Enter the standard\n");
	scanf("%d",&iValue);

	DisplayFees(iValue);
	return 0;
}

	
