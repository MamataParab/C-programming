#include<stdio.h>
int GenericRoot(int iNo)
{
	int iDigit=0;
	int iSum=0;
	
	while(iNo!=0)
	{
		for(iSum=0;iNo>0;iNo=iNo/10)
		{
			iDigit=iNo%10;
			iSum=iSum+iDigit;
		}
		if(iSum>9)
		{
			iNo=iSum;
		}
		
	}
	return iSum;
}


int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	iRet=GenericRoot(iValue);
	printf("Generic root is  %d\n",iRet);

	return 0;
}
		

	