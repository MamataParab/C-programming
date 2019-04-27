#include<stdio.h>

void ConditionalCharDisplay(char ch)
{
	char i='\0';

	if((ch>='a')&&(ch<='z'))
	{
		for(i=ch;i>='a';i--)
		{
			printf("%c\t",i);
		}
	}
	else if((ch>='A')&&(ch<='Z'))
	{
		for(i=ch;i<='Z';i++)
		{
			printf("%c\t",i);
		}
	}
}


int main()
{
	char ch='\0';


	printf("Enter a character\n");
	scanf("%c",&ch);
	ConditionalCharDisplay(ch);
	

	return 0;
}
