#include<stdio.h>

void DisplayASCII(char ch)
{
	printf("%d\t%o\t%x\n",ch);
}

int main()
{
	char cValue='\0';
	printf("Enter the value\n");
	scanf("%c",&cValue);

	DisplayASCII(cValue);
	return 0;
}