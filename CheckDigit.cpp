#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
	if((ch>='1')&&(ch<='9'))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char ch='\0';
	BOOL Bret=TRUE;

	printf("Enter a digit\n");
	scanf("%c",&ch);
	
	Bret=ChkDigit(ch);
	if(Bret==TRUE)
	{
		printf("It is a digit\n");
	}
	else
	{
		printf("It is not a digit\n");
	}
	return 0;
}
