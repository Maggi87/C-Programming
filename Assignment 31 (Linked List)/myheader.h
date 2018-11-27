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
void Display(PNODE);

void DisplayPerfect(PNODE);
void DisplayPrime(PNODE);
int AdditionEven(PNODE);
void SumDigit(PNODE);
