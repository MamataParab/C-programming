#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node* lchild;
	int data;
	struct node* rchild;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Search(PNODE root,int value)
{
	if(root==NULL)
	{
		return FALSE;
	}
	else if(value>root->data)
	{
		if(root->rchild==NULL)
		{


