#include<stdio.h>
void DisplayNumRev(int value)
{
	int i=0;
	for(i=value;i>=1;i--)
	{
		printf("%d\n",i);
	}
}

int main()
{
	int iNo=0;
	printf("Enter the number\n");
	scanf("%d",&iNo);

	DisplayNumRev(iNo);
	return 0;
}

