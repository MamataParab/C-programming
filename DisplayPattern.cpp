#include<stdio.h>

void DisplayPattern(int iNo, char ch)
{
	int i=0;
	for(i=1;i<=iNo;i++)
	{
		printf("%c\t",ch);
	}
}

int main()
{
	int iValue=0;
	char ch='\0';

	printf("Enter the number\n");
	scanf("%d",&iValue);

	fflush(stdin);
	printf("Enter the character\n");
	scanf("%c",&ch);

	DisplayPattern(iValue,ch);
	return 0;
}



