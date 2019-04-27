#include<stdio.h>

void CopyStr(char *source,char *destination)
{
	int i=0;


	if(*source==NULL)
	{
		return;
	}
	printf("Copied string is\n");
	for(i=0;source[i]!='\0';i++)
	{
		destination[i]=source[i];	
		printf("%c",destination[i]);
	}
	printf("\n");

}

int main()
{
	char str1[30];
	char str2[30];

	printf("Enter a string\n");
	scanf("%[^'\n']s",str1);

	CopyStr(str1,str2);
	return 0;
}