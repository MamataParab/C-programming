#include<stdio.h>

void DisplayChar(char ch)
{
	printf("Enterd character is %c\n",ch);
}

int main()
{
	char ch='\0';
	printf("Enter the character\n");
	scanf("%c",&ch);

	DisplayChar(ch);
	return 0;
}

