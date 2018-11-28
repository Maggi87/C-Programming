/*3. Write a program which display contents of linked list using recursive approach.
	void DisplayR(PNODE first)
	{
		if(________________)
		{
			// Logic
		}
	}
*/
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

void DisplayR(PNODE head)
{
	if(head!=NULL)
	{
		printf("|%d|->",head->data);
		head = head->next;
		DisplayR(head);				
	}
}

