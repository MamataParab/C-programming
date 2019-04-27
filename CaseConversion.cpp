#include<stdio.h>

char CaseConversion(char ch1)
{
	if((ch1>='A')&&(ch1<='Z'))
	{
		ch1=ch1+32;
	}
	else if((ch1>='a')&&(ch1<='z'))
	{
		ch1=ch1-32;
	}
	return ch1;
}

int main()
{
	char cRet='\0';
	char ch1='\0';

	printf("Enter character\n");
	scanf("%c",&ch1);

	cRet=CaseConversion(ch1);
	printf("Character after case conversion\t %c\n",cRet);
	return 0;
}


