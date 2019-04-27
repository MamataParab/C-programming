#include<stdio.h>

void DisplayClass(int Tmarks,int Omarks) //Tmarks=Total Marks and Omarks=Obtained Marks
{
	double Percentage=((Omarks/Tmarks)*100);
	if(Tmarks<Omarks)
	{
		printf("Invalid Input\n");
		return;
	}

	if(Percentage<35)
	{
		printf("You are failed\n");
	}
	else if(Percentage<50)
	{
		printf("You got passed class\n");
	}
	else if(Percentage<60)
	{
		printf("You got second class\n");
	}
	else if(Percentage<75)
	{
		printf("Congratulaton...You got First class\n");
	}
	else if(Percentage>75)
	{
		printf("Congratulation... You got First class with distinction \n");
	}
}

int main()
{
	int ObtMarks=0;
	int TotMarks=0;

	printf("Enter your total marks\n");
	scanf("%d",&TotMarks);

	printf("Enter your obtained marks\n");
	scanf("%d",&ObtMarks);

	DisplayClass(TotMarks,ObtMarks);
	
	return 0;
}