#include<stdio.h>

int ParkingChar(int Hrs)
{
	int Amt=0;
	if(Hrs<=3)
	{
		Amt=Hrs*30;
	}
	else if(Hrs>3)
	{
		Amt=3*30+(Hrs-3)*5;
	}
	return Amt;
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter the Kilometer distance\n");
	scanf("%d",&iValue);

	iRet=ParkingChar(iValue);
	printf("The amount is %d\n",iRet);
	return 0;
}



