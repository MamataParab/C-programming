#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
	if((ch>='A')&&(ch<='Z'))
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

	printf("Enter a character\n");
	scanf("%c",&ch);
	
	Bret=ChkCapital(ch);
	if(Bret==TRUE)
	{
		printf("It is a capital character\n");
	}
	else
	{
		printf("It is not a capital character\n");
	}
	return 0;
}
