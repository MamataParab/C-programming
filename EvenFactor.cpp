#include<stdio.h>

void DisplayEvenFact(int iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo/2;iCnt++)
	{
		if(((iNo%iCnt)==0)&&((iCnt%2)==0))
		{
			printf("%d\t",iCnt);
		}

	}
}

int main()
{
	int iValue=0;
	printf("Enter the number\n");
	scanf("%d",&iValue);

	DisplayEvenFact(iValue);

	return 0;
}