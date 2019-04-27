#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkPalindrome(int iNo)
{
	int iDigit=0;
	int iRev=0;
	int itemp=iNo;

	while(iNo!=0)
	{
		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;
	}
	if(itemp==iRev)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	BOOL Bret=TRUE;
	int iValue=0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
    Bret=ChkPalindrome(iValue);

	 if(Bret==TRUE)
	 {
		 printf("Given number is Palindrome\n");
	 }
	 else
	 {
		 printf("Given number is not palindrome\n");
	 }
	 return 0;
}