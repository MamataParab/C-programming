#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkEvenOdd(int);

int main()
{
	BOOL Bret=TRUE;
	int iNo=0;

	printf("Enter the number\n");
	scanf("%d",&iNo);
	
	Bret=ChkEvenOdd(iNo);
	if(Bret==TRUE)
	{
		printf("Number is Even\n");
	}
	else
	{
		printf("Number is odd\n");
	}

	return 0;
}

BOOL ChkEvenOdd(int iNo)
{
	if((iNo%2)==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}


