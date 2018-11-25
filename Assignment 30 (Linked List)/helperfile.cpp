#include"myheader.h"

void InsertFirst(PPNODE head,int value)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->data = value;

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
    printf("\n");
    while(head!=NULL)
    {
        printf("|%d|->",head->data);
        head = head->next;
    }
    printf("NULL");
    printf("\n");
}

int SearchFirstOccu(PNODE head,int iValue)
{
    int i = 0;
    for(i=1;head!=NULL;head=head->next,i++)
    {
        if(head->data == iValue)
        {
            break;
        }
    }
    return i;
}

int SearchLastOccu(PNODE head,int iValue)
{
    int i = 0, j = 0;
    for(i=1;head!=NULL;head=head->next,i++)
    {
        if(head->data == iValue)
        {
            j = i;
        }
    }
    return j;
}

int Addition(PNODE head)
{
    int iSum = 0;
    
    while(head!=NULL)
    {
        iSum = iSum + head->data;
        head = head->next;
    }
    return iSum;     
}

int Maximun(PNODE head)
{
    int max = head->data;
    
    while(head!=NULL)
    {
       if(head->data > max)
       {
           max = head->data;
       }
       head = head->next;
    }
    return max;     
}

int Minimun(PNODE head)
{
    int min = head->data;
   
    while(head!=NULL)
    {
       if(head->data < min)
       {
           min = head->data;
       }
       head = head->next;
    }
    return min;     
}