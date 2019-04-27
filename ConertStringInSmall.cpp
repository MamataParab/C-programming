#include<stdio.h>

void ConvertString(char *str)
{
	if(*str=='\0')
	{
		return;
	}
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			*str=*str+32;
		}
		printf("%c",*str);
		*str++;
	}
	printf("\n");
}

int main()
{
	char ch[20];

	printf("Enter a string\n");
	scanf("%[^'\n']s",ch);

	ConvertString(ch);

	return 0;
}


