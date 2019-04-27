#include<stdio.h>
#include<stdlib.h>

void Pattern(int arr[],int size)
{
	int i=0;
	int j=0;
	int Digit=0;
	int iRev=0;


	int *brr=NULL;
	brr=(int*)calloc(size,sizeof(int));

	int *crr=NULL;
	crr=(int*)calloc(size,sizeof(int));

	for(i=0;i<size;i++)
	{
		crr[i]=arr[i];
	}

	for(i=0;i<size;i++)
	{
		while(arr[i]!=0)
		{
			Digit=arr[i]%10;
			iRev=iRev*10+Digit;
			arr[i]=arr[i]/10;
		}
		brr[i]=iRev;
		iRev=0;
		Digit=0;
	}


	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if((i%2)!=0)
			{
				printf("%d\t",crr[j]);
			}
			else
			{
				printf("%d\t",brr[j]);
			}
		}
		printf("\n");
	}

}

int main()
{
	int arr[5]={13,14,15,16,17};
	Pattern(arr,5);

	return 0;
}


