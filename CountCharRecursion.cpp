#include<stdio.h>
#include<stdlib.h>

int CountCharR(char arr[])
{
	static int i=0;
    static int iCnt=0;

	if(arr[i]!='\0')
	{
		iCnt++;
		i++;
		CountCharR(arr);
	}
	return iCnt;

}

int main()
{
	int i=0;
	int iRet=0;

	
	iRet=CountCharR("Mamata");
	printf("Count of character is %d\n",iRet);

	return 0;
}



