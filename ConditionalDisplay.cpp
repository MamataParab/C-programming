#include<stdio.h>

void ConditionalDisplay(int value)
{
	if(value<10)
	{
		printf("Hello\n");
	}
	else
	{
		printf("Demo\n");
	}
}

int main()
{
	int iNo=0;
	printf("Enter the number\n");
	scanf("%d",&iNo);

	ConditionalDisplay(iNo);

	return 0;
}
