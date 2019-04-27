#include<stdio.h>

void DisplayASCIIValue()
{
	int i=0;
	for(i=0;i<=255;i++)
	{
		printf("%d\t%o\t%x\n",i);
	}
}

int main()
{
	DisplayASCIIValue();
	return 0;
}
