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
void InsertSecond(PPNODE,int);
void Display(PNODE);

PNODE Concat(PPNODE,PPNODE);
PNODE ConFirstN(PPNODE,PPNODE,int);
PNODE ConcatListRange(PPNODE,PPNODE,int,int);
PNODE LLCopy(PPNODE,PPNODE);
void LLCopyN(PPNODE,PPNODE);