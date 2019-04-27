#include<stdio.h>

void CapitalorSmall(char ch)
{
	if((ch>='A') && (ch<='Z'))
	{
		printf("It is capital character\n");
	}
	else if((ch>='a') && (ch<='z'))
	{
		printf("It is small character\n");
	}
	else
	{
		printf("It is not a character\n");
	}
}
int main()
{
	char ch='\0';
	printf("Enter the charcter\n");
	scanf("%c",ch);

	CapitalorSmall(ch);
	return 0;
}

