#include"myheader.h"

int main()
{
	PNODE first = NULL;
	int iRet = 0;
	InsertFirst(&first,89);
	InsertFirst(&first,6);
	InsertFirst(&first,41);
	InsertFirst(&first,47);
	InsertFirst(&first,28);
	InsertFirst(&first,11);
	
	
	Display(first);
	printf("\n---------------------------------------------------------------------\n");
	DisplayPerfect(first);
	printf("\n---------------------------------------------------------------------\n");
	DisplayPrime(first);
	printf("\n---------------------------------------------------------------------\n");
	iRet = AdditionEven(first);
	printf("Addition of Even Number:- %d",iRet);
	printf("\n---------------------------------------------------------------------\n");
	iRet = SecMaximun(first);
	printf("Second Max Number:- %d",iRet);
	printf("\n---------------------------------------------------------------------\n");
	SumDigit(first);
	printf("\n---------------------------------------------------------------------\n");
	
	return 0;
}