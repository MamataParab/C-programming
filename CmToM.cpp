#include<stdio.h>

float CtoM(int iNo)
{
	float fResult=0.0;
	fResult=iNo/100;
	return fResult;
}

int main()
{
	float ivalue=0.0;
	float fRet=0.0;
	printf("Enter the value in Centemeter\n");
	scanf("%f",&ivalue);
	fRet=CtoM(ivalue);
	printf("Centemeter to meter conversion is %f\n",fRet);

	return 0;
}


