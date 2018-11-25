#include<stdio.h>
#include<malloc.h>

#define TRUE 1
#define FALSE 0

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
int SearchFirstOccu(PNODE,int);
int SearchLastOccu(PNODE,int);
int Addition(PNODE);
int Maximun(PNODE);
int Minimun(PNODE);