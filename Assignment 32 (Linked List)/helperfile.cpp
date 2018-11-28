#include"myheader.h"

void InsertFirst(PPNODE head,int iValue)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	newn->next = NULL;
	newn->data = iValue;

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

void InsertSecond(PPNODE head,int iValue)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	newn->next = NULL;
	newn->data = iValue;

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

void Display(PNODE head1)
{
	while(head1!=NULL)
	{
		printf("|%d|->",head1->data);
		head1 = head1->next;
	}
	printf("NULL \n");	
}

void Concat(PPNODE src,PPNODE desti)
{
	PNODE temp = *desti;
	
	if((*src == NULL)&&(*desti == NULL))
	{
		return;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp = temp->next;
		}
		temp->next = *src;
	}
}

void ConFirstN(PPNODE src,PPNODE desti,int iPos)
{
	PNODE temp = *desti;
	int i = 0;
	if((*src == NULL)&&(*desti == NULL))
	{
		return;
	}
	else
	{
		for(i=1;i<iPos;i++)
		{
			temp = temp->next;
		}
		temp->next = NULL;
		temp->next = *src;
	}
}

void ConcatListRange(PPNODE src,PPNODE desti,int start,int end)
{

}

void LLCopy(PPNODE src,PPNODE desti)
{

}

void LLCopyN(PPNODE src,PPNODE desti)
{

}

