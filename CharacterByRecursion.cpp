#include<stdio.h>

void DisplayCharR(char ch,int iNo)
{
	static int i=0;
	if(i<iNo)
	{
		printf("%c\t",ch);
		i++;
		DisplayCharR(ch,iNo);
	}
}

int main()
{
	int iValue=0;
	char ch='\0';
	printf("Enter the character\n");
	scanf("%c",&ch);

	printf("Enter the number\n");
	scanf("%d",&iValue);

	DisplayCharR(ch,iValue);
}

