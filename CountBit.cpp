#include<stdio.h>
typedef unsigned long int UINT;

int CountBit(UINT iNo)
{
	int iCnt=0;
	int iDigit=0;

	while(iNo!=0)
	{
		iDigit=iNo%2;
		if(iDigit==1)
		{
			iCnt++;
		}
		iNo=iNo/2;
	}
	return iCnt;
}

int main()
{
	UINT iValue=0;
	UINT Ret=0;
	printf("Enter number\n");
	scanf("%u",&iValue);

	Ret=CountBit(iValue);
	printf("The number of 1's is %u\n",Ret);

	return 0;
}
		
