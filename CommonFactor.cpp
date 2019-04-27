#include<stdio.h>

void DisplayComFactor(int iNo1,int iNo2)
{
	int i=0;
	for(i=2;((i<=iNo1/2)&&(i<=iNo2/2));i++)
	{
		if(((iNo1%i)==0)&&((iNo2%i)==0))
		{
			printf("%d\t",i);
		}
	}
}

int main()
{
	int iValue1=0;
	int iValue2=0;

	printf("Enter the first number\n");
	scanf("%d",&iValue1);

	printf("Enter the second number\n");
	scanf("%d",&iValue2);

	DisplayComFactor(iValue1,iValue2);

	return 0;
}

