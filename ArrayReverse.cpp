#include<stdio.h>
/*void Reverse(int arr[],int size)
{
	int i=0;
	for(i=size-1;i>=0;i--)
	{
		printf("%d\t",arr[i]);
	}
}*/

int CntDuplicate(int arr[],int size)
{
	int i=0;
	int j=0;
	int iCnt=0;

	for(i=0;i<size;i++)
	{
		for(j=1;j<=size-i;j++)
		{
			if(arr[i]==arr[j])
			{
				iCnt++;
			}
		}
	}
	return iCnt;
}

int main()
{
	int arr[]={11,22,33,44,55,11,22,33,44,55,22,11,};
	int iRet=0;

	//Reverse(arr,5);

	iRet=CntDuplicate(arr,12);
	printf("\nTotal duplicate elements count is %d\t",iRet/2);

	return 0;
}
