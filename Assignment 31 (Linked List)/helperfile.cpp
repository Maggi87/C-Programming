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

void Display(PNODE head)
{
	while(head!=NULL)
	{
		printf("|%d|->",head->data);
		head = head->next;
	}
	printf("NULL");
}

void DisplayPerfect(PNODE head)
{
	int i = 0, sum = 0;
	while(head!=NULL)
	{
		sum = 0;
		for(i=1;i<=head->data/2;i++)
		{
			if((head->data%i)==0)
			{
				sum = sum + i;
			}
		}
		
		
		if(sum == head->data)
		{
			printf("|%d|->",head->data);
		}
		head = head->next;
	}
	printf("NULL");
}

void DisplayPrime(PNODE head)
{
	int i = 0;
	while(head!=NULL)
	{
		
		for(i=2;i<=head->data;i++)
		{
			if((head->data % i)==0)
			{
				break;
				printf("%d",head->data);
			}
		}
		if(head->data == i)
		{
			printf("|%d|->",head->data);
		}
		head = head->next;
	}
	printf("NULL");
}

int AdditionEven(PNODE head)
{
	int sum = 0;
	while(head!=NULL)
	{
		if((head->data%2) == 0)
		{
			sum = sum + head->data;			
		}
		head = head->next;
	}

	return sum;
}

void SumDigit(PNODE head)
{
	int sum = 0, iDigit = 0;

	while(head!=NULL)
	{
		sum = 0;
		while(head->data!=0)
		{
			iDigit = head->data % 10;
			sum = sum + iDigit;
			head->data = head->data / 10;
		}
		head = head->next;
		printf("%d\t",sum);
	}
}