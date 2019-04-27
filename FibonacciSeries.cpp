#include<stdio.h>

void FibonacciSeries(int No)
{
	int i=0;
	int iSum=0;
	int temp=0;

	int First=1;
	int Second=1;

	printf("%d,%d,",First,Second);

	for(i=0;i<No;i++)
	{
		First=First+Second;
		temp=First;
		First=Second;
		Second=temp;
		printf("%d,",Second);
	}
}

int main()
{
	FibonacciSeries(7);
	return 0;
}


