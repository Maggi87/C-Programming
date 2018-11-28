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

void Concat(PPNODE,PPNODE);
void ConFirstN(PPNODE,PPNODE,int);
void ConcatListRange(PPNODE,PPNODE,int,int);
void LLCopy(PPNODE,PPNODE);
void LLCopyN(PPNODE,PPNODE);