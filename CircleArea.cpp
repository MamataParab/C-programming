#include<stdio.h>

float AreaCircle(float Radius)
{
	float pi=3.14;
	float iResult=0.0;
	iResult=Radius*Radius*pi;
	return iResult;
}

int main()
{
	float ivalue=0;
	float fRet=0.0;
	printf("Enter the radius\n");
	scanf("%f",&ivalue);
	fRet=AreaCircle(ivalue);
	printf("Area of circle is %f\n",fRet);

	return 0;
}


