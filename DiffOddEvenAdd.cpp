#include<stdio.h>

int DiffOddEvenAdd(int iNo)
{
	int iEve=0;
	int iOdd=0;
	int iDigit=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if((iDigit%2)==0)
		{
			iEve=iEve+iDigit;
		}
		else
		{
			iOdd=iOdd+iDigit;
		}

		iNo=iNo/10;
	}
	return iEve-iOdd;
}

int main()
{
	int iNo=0;
	int iRet=0;
	printf("Enter the number\n");
	scanf("%d",&iNo);

	iRet=DiffOddEvenAdd(iNo);
	printf("Total difference of even and odd digit is %d\n",iRet);

	return 0;
}