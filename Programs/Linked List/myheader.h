#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

struct node
{
	int data;
	struct node* next;
};


typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE,int);
void InsertLast(PPNODE,int);
void Display(PNODE);
int Count(PNODE);
