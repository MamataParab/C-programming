#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpeSymbol(char ch)
{
	if((ch=='#')||(ch=='@')||(ch=='$')||(ch=='%')||(ch=='&')||(ch=='*')||(ch=='^'))
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
	
	Bret=ChkSpeSymbol(ch);
	if(Bret==TRUE)
	{
		printf("It is a special character\n");
	}
	else
	{
		printf("It is not a special character\n");
	}
	return 0;
}
