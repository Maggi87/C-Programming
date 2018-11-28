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

PNODE Concat(PPNODE src,PPNODE desti)
{
	PNODE temp = *desti;
	
	if((*src == NULL)&&(*desti == NULL))
	{
		return NULL;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp = temp->next;
		}
		temp->next = *src;
	}

	return *desti;
}

PNODE ConFirstN(PPNODE src,PPNODE desti,int iPos)
{
	PNODE temp = *desti;
	int i = 0;
	if((*src == NULL)&&(*desti == NULL))
	{
		return NULL;
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

	return *desti;
}

PNODE ConcatListRange(PPNODE src,PPNODE desti,int start,int end)
{
	int i = 1;
	PNODE temp = *src;
	PNODE temp1 = *desti;
	
	while(temp1->next!=NULL)
	{
		temp1 = temp1->next;
	}
	
	while(i<start)
	{
		i++;
		temp = temp->next;
	}	
	
	temp1->next = temp;
	return *desti;
}

PNODE LLCopy(PPNODE src,PPNODE desti)
{
	PNODE newn = NULL;
	PNODE temp = *src;
	PNODE temp2 = *desti;
	
	while(temp!=NULL)
	{
		if(newn == NULL)
		{
			newn = (PNODE)malloc(sizeof(NODE));
			newn->data = temp->data;
			newn->next = NULL;
			temp2 = newn;
		}
		else
		{
			temp2->next = (PNODE)malloc(sizeof(NODE));
			temp2 = temp2->next;
			temp2->data = temp->data;
			temp2->next = NULL;
		}
		temp = temp->next;
	}
	
	return *desti;
}

void LLCopyN(PPNODE src,PPNODE desti)
{

}

