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

int Search(PNODE head,int iNo)
{
	int iCnt=0;
	
	while(head!=NULL)
	{
		if((head->data)==iNo)
		{
			break;
		}
		iCnt++;
		head=head->next;
	}
	return iCnt;
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

void ConcatLinkedList(PPNODE head,PPNODE head2)
{
	PNODE newn=NULL;
	newn=(PNODE)calloc(5,sizeof(NODE));

	newn->data=(*head2)->data;
	newn->next=NULL;

	if((*head)==NULL)
	{
		(*head)->next=*head2;
	}
	while(*head!=NULL)
	{
		*head=(*head)->next;
	}
	(*head)=*head2;
}
	



int main()
{
	PNODE First=NULL;
	PNODE Second=NULL;
	int iValue=0;

	int iRet=0;
	printf("First linkedlist is \n");
	InsertFirst(&First,22);
	InsertFirst(&First,11);
	InsertFirst(&First,22);
	InsertFirst(&First,33);
	InsertFirst(&First,44);
	InsertFirst(&First,33);
	InsertFirst(&First,55);
	Display(First);

	printf("\nSecond linkedlist is \n");
	InsertFirst(&Second,101);
	InsertFirst(&Second,202);
	InsertFirst(&Second,303);
	Display(Second);

	printf("\nConcatinated linkedlist is\n");
	ConcatLinkedList(&First,&Second);
	Display(First);
	



	return 0;
}



