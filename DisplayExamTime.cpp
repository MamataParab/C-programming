#include<stdio.h>

void DisplayExamTime(char div)
{
	switch(div)
	{
	case 'A':
		printf("Your exam time is 7am\n");
		break;

	case 'B':
		printf("Your exam time is 8.30 am\n");
		break;

	case 'C':
		printf("Your exam time is 10 am\n");
		break;

	case 'D':
		printf("Your exam time is 11.30 am\n");
		break;

	default:
		printf("Please enter correct division\n");
		break;
	}
	
}

int main()
{
	char ch='\0';


	printf("Enter a your division\n");
	scanf("%c",&ch);
	
	DisplayExamTime(ch);
	
	return 0;
}
