#include"myheader.h"


int main()
{
   PNODE first = NULL; 
   int iRet = 0;

   InsertFirst(&first,11);
   InsertFirst(&first,13);
   InsertFirst(&first,14);
   InsertFirst(&first,214);
   InsertFirst(&first,13);
   InsertFirst(&first,15);
   InsertFirst(&first,16);

   Display(first);

   iRet = SearchFirstOccu(first,14);
   printf("element occured at position :- %d",iRet);
   printf("\n");

   iRet = SearchLastOccu(first,13);
   printf("element occured at position :- %d",iRet);
   printf("\n");

   iRet = Addition(first);
   printf("Sum of all element :- %d",iRet);
   printf("\n");

   iRet = Maximun(first);
   printf("Maximun Value in LL :- %d",iRet);
   printf("\n");

   iRet = Minimun(first);
   printf("Minimun Value in LL :- %d",iRet);
   printf("\n");

   return 0;
}