#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
	if(((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch<='Z')))
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
	printf("Enter the character\n");
	scanf("%c",&ch);

	Bret=ChkAlpha(ch);
	if(Bret==TRUE)
	{
		printf("It is a character\n");
	}
	else
	{
		printf("It is not a character\n");
	}
	return 0;
}
