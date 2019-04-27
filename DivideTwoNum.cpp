#include<stdio.h>
float DisplayDiv(int iNo1,int iNo2)
{
	float Fret=0.0;

	if(iNo2==0)
	{
		return -1.0;
	}
	if(iNo1<0)
	{
		iNo1=-iNo1;
	}
	if(iNo2<0)
	{
		iNo2=-iNo2;
	}
	Fret=(iNo1/iNo2);
	return Fret;
}

int main()
{
	int value1=0;
	int value2=0;

	float fValue=0.0;

	printf("Enter first number\n");
	scanf("%d",&value1);

	printf("Enter second number\n");
	scanf("%d",&value2);

	fValue=DisplayDiv(value1,value2);
	printf("Division of two given number is %f\n",fValue);

	return 0;
}

