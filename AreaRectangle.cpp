#include<stdio.h>
float AreaRectangle(float length,float width)
{
	float iResult=0;
	iResult=length*width;
	return iResult;
}

int main()
{
	float iValue1=0;
	float iValue2=0;

	float iRet=0;

	printf("Enter the length of rectangle\n");
	scanf("%f",&iValue1);

	printf("Enter the width of rectangle\n");
	scanf("%f",&iValue2);

	iRet=AreaRectangle(iValue1,iValue2);
	printf("The area of rectangle is %f\n",iRet);
	return 0;
}