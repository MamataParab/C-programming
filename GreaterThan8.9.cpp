#include<stdio.h>
void GreaterThan(float arr[],int value)
{
	int i=0;
	int iSum=0;

	for(i=0;i<value;i++)
	{
		if(arr[i]>8.9)
		{
			printf("%f\t",arr[i]);
		}
	}
}

int main()
{
	float brr[5];
	int i=0;
	float iRet=0;

	printf("Enter the values in float\n");
	for(i=0;i<5;i++)
	{
		scanf("%f",&brr[i]);
	}
	GreaterThan(brr,5);
	

	return 0;
}




	