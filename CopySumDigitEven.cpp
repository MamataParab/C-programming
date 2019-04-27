#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head,int Value)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=Value;
	newn->next=NULL;

	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		newn->next=*head;
		*head=newn;
	}
}

void CopySumDigitEven(PNODE head,PPNODE head2)
{
	int iDigit=0;
	int iSum=0;
	int temp=0;

	while(head!=NULL)
	{
		while(head->data!=NULL)
		{
			temp=head->data;
			iDigit=head->data%10;
			iSum=iSum+iDigit;
			head->data=head->data/10;
		}
		if((iSum%2)==0)
		{
			(*head2)->data=iSum;
			printf("%d\t",(*head2)->data);
			*head2=(*head2)->next;
		}
		head=head->next;
		iSum=0;
	}
}

	
void Display(PNODE head)
{
	if(head==NULL)
	{
		return;
	}
	
	while(head!=NULL)
	{
		printf("%d\t",head->data);
		head=head->next;
	}
}

int main()
{
	PNODE First=NULL;
	int iRet=0;
	PNODE Second=NULL;

	InsertFirst(&First,28);
	InsertFirst(&First,11);
	InsertFirst(&First,27);
	InsertFirst(&First,41);
	InsertFirst(&First,6);
	InsertFirst(&First,89);
	InsertFirst(&First,33);
	InsertFirst(&First,55);
	//Display(First);


	CopySumDigitEven(First,&Second);
	


	return 0;
}