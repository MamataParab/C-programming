#include<stdio.h>

void CopyCapitalChar(char *source,char *destination)
{
	int i=0;
	int j=0;

	if(*source==NULL)
	{
		return;
	}
	for(i=0;source[i]!='\0';i++)
	{
		if(source[i]>='A'&& source[i]<='Z')
		{
			destination[i]=source[i];
			
		}
		printf("%c",destination[i]);
	}

}

int main()
{
	char str1[30];
	char str2[30];

	printf("Enter a string\n");
	scanf("%[^'\n']s",str1);

	CopyCapitalChar(str1,str2);
	return 0;
}