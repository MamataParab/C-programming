#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmallChar(char ch)
{
	if((ch>='a')&&(ch<='z'))
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
	
	Bret=ChkSmallChar(ch);
	if(Bret==TRUE)
	{
		printf("It is a small case character\n");
	}
	else
	{
		printf("It is not a small case character\n");
	}
	return 0;
}
