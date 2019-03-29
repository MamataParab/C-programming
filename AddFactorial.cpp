#include<stdio.h>

int AddFact(int iNo)
{
	int iFact=0;
	int i=0;


	for(i=iNo/2;i>=1;i--)
	{
		if((iNo%i)==0)
		{
			iFact=iFact+i;
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
	
	Value=AddFact(iNo);
	printf("Addition of factor is %d\n",Value);
	
	return 0;
}
