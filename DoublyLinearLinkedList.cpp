#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
	struct node* prev;
	int data;
	struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head,int value)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->next=NULL;
	newn->prev=NULL;
	newn->data=value;

	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		newn->next=*head;
		(*head)->prev=newn;
		*head=newn;
	}
}


void Display(PNODE head)
{
	while(head!=NULL)
		{
			printf("%d\t", head->data);
			head=head->next;
		}
		
}

int Count(PNODE head)
{
	int icnt=0;

	while(head!=NULL)
	{
		icnt++;
		head=head->next;
	}
	return icnt;
}

void InsertLast(PPNODE head,int value)
{
	PNODE newn=NULL;
	PNODE temp=*head;

	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=value;
	newn->next=NULL;
	newn->prev=NULL;

	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
		newn->prev=temp;
	}
}

void InsertAtPos(PPNODE head,int value,int ipos)
{
	int i=0;
	int size=Count(*head);
	PNODE temp=*head;
	PNODE newn=NULL;

	if(ipos==1)
	{
		InsertFirst(head,value);
	}
	else if(ipos==size+1)
	{
		InsertLast(head,value);
	}
	else
	{
		newn=(PNODE)malloc(sizeof(NODE));
		newn->data=value;
		newn->next=NULL;
		newn->prev=NULL;

		for(i=1;i<=(ipos-2);i++)
		{
			temp=temp->next;
		}
		newn->next=temp->next;
		temp->next->prev=newn;
		newn->prev=temp;
		temp->next=newn;
		
	}
}

void DeleteFirst(PPNODE head)
{
	PNODE temp=*head;
	if(*head==NULL)
	{
		return;
	}
	else
	{
		*head=(*head)->next;
		free(temp);
	}
}

void DeleteLast(PPNODE head)
{
	PNODE temp=*head;
	if(*head==NULL)
	{
		return;
	}
	else
	{
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		free(temp->next);
		temp->next=NULL;
	}
}

void DeleteAtPos(PPNODE head,int iPos)
{
	int i=0;
	PNODE temp=*head;
	PNODE temp2=NULL;
	int size=Count(*head);
	
	if(iPos==1)
	{
		DeleteFirst(head);
	}
	else if(iPos==size+1)
	{
		DeleteLast(head);
	}
	else
	{
		for(i=1;i<=iPos-1;i++)
		{
			temp=temp->next;
		}
		temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
		free(temp);

	}
}
		
		



int main()
{
	PNODE First=NULL;
	int iRet=0;

	printf("InsertFirst\n");
	InsertFirst(&First,11);
	InsertFirst(&First,22);
	InsertFirst(&First,33);
	InsertFirst(&First,44);
	InsertFirst(&First,55);
	Display(First);
	iRet=Count(First);
	printf("\nCount of node is %d\n",iRet);

	printf("\nInsertLast\n");
	InsertLast(&First,101);
	Display(First);
	iRet=Count(First);
	printf("\nCount of node is %d\n",iRet);

	printf("\nInsertAtPos\n");
	InsertAtPos(&First,201,4);
	Display(First);
	iRet=Count(First);
	printf("\nCount of node is %d\n",iRet);

	printf("\nDeleteFirst\n");
	DeleteFirst(&First);
	Display(First);
	iRet=Count(First);
	printf("\nCount of node is %d\n",iRet);

	printf("\nDeleteLast\n");
	DeleteLast(&First);
	Display(First);
	iRet=Count(First);
	printf("\nCount of node is %d\n",iRet);

	printf("\nDeleteAtPos\n");
	DeleteAtPos(&First,3);
	Display(First);
	iRet=Count(First);
	printf("\nCount of node is %d\n",iRet);


	return 0;


}




