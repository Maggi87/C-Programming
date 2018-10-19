#include"myheader.h"
#include<stdio.h>

void InsertFirst(PPNODE head,int iValue)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));

	newn->data = iValue;
	newn->next = NULL;

	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{
		newn->next = *head;
		*head = newn;
	}
}

void InsertLast(PPNODE head,int iValue)
{
	PNODE newn = NULL;
	PNODE temp = *head;

	newn = (PNODE)malloc(sizeof(NODE));

	newn->data = iValue;
	newn->next = NULL;

	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
	}
}


void Display(PNODE head)
{
	printf("\nElement from LL are\n");

	while(head!=NULL)
	{
		printf("| %d | ->",head->data);
		head = head->next;
	}
	printf("NULL\n");
}

int Count(PNODE head)
{
	int iCnt = 0;
	printf("\nElement from LL are\n");

	while(head!=NULL)
	{
		iCnt++;
		head = head->next;
	}

	return iCnt;
}
