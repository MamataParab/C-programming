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

int Largest(PNODE head)
{
	int iLarge=head->data;
	
	while(head!=NULL)
	{
		if(head->data>iLarge)
		{
			iLarge=head->data;
		}
		head=head->next;
	}
	return iLarge;
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

	InsertFirst(&First,22);
	InsertFirst(&First,11);
	InsertFirst(&First,22);
	InsertFirst(&First,33);
	InsertFirst(&First,100);
	InsertFirst(&First,44);
	InsertFirst(&First,33);
	InsertFirst(&First,55);
	Display(First);


	iRet=Largest(First);
	printf("\nThe largest element is %d\n",iRet);


	return 0;
}