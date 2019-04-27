#include<stdio.h>

void DisplayEven(int iNo)
{
	int i=0;
	int iResult=0;
	for(i=1;i<=iNo;i++)
	{
		iResult=i*2;
		printf("%d\t",iResult);
	}
}
int main()
{
	int iValue=0;
	printf("Enter the number\n");
	scanf("%d",&iValue);

	DisplayEven(iValue);
	return 0;
}
	
