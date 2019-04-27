#include<stdio.h>

int LargestFact(int iNo)
{
	int iFact=0;
	int i=0;

	for(i=iNo/2;i>=1;i--)
	{
		if((iNo%i)==0)
		{
			iFact=i;
			break;
		}
	}
	return iFact;
	
}

int main()
{
	int iNo=0;
	int Value=0;
	printf("Enter the number\n");
	scanf("%d",&iNo);
	
	Value=LargestFact(iNo);
	printf("Largest factor is %d\n",Value);
	
	return 0;
}
