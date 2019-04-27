#include<stdio.h>

void DisplayPremium(int age)
{
	if(age<18)
	{
		printf("Invalid age...\n");
		printf("Age should be above 18\n");
	}
	else if(age<20)
	{
		printf("Premium is 20,000\n");
	}
	else if((age>=20)&&(age<45))
	{
		printf("Premium is 35000\n");
	}
	else if((age>=45)&&(age<70))
	{
		printf("Premium is 52000\n");
	}
	else
	{
		printf("Premium is 85000\n");
	}
}

int main()
{
	int iAge=0;

	printf("Enter your age\n");
	scanf("%d",&iAge);

	DisplayPremium(iAge);

	return 0;
}
