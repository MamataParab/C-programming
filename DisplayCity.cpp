#include<stdio.h>

void CityDisplay(int CityCode)
{
	switch(CityCode)
	{
	case 10:
		printf("Your city is Sangli\n");
		break;

	case 11:
		printf("Your city is Satara\n");
		break;
		
	case 12:
		printf("Your city is Pune\n");
		break;

	case 13:
		printf("Your city is Solapure\n");
		break;

	case 14:
		printf("Your city is Pimpri\n");
		break;

	case 15:
		printf("Your city is Nasik\n");
		break;

	case 16:
		printf("Your city is Nagar\n");
		break;

	default:
		printf("Wrong choice\n");
		break;
	}
}

int main()
{
	int iNo=0;
	printf("Enter your citycode\n");
	scanf("%d",&iNo);

	CityDisplay(iNo);
	return 0;
}

