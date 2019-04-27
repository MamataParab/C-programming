#include<stdio.h>

float CircumCircle(float Radius)
{
	float pi=3.14;
	float iResult=0.0;
	iResult=2*Radius*pi;
	return iResult;
}

int main()
{
	float ivalue=0;
	float fRet=0.0;
	printf("Enter the radius\n");
	scanf("%f",&ivalue);
	fRet=CircumCircle(ivalue);
	printf("Circumference of circle is %f\n",fRet);

	return 0;
}


