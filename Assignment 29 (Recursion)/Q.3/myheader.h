/*3. Write a program which display contents of linked list using recursive approach.
	void DisplayR(PNODE first)
	{
		if(________________)
		{
			// Logic
		}
	}
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE,int);
void DisplayR(PNODE);


