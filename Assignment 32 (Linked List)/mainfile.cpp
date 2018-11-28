#include"myheader.h"

int main()
{
	PNODE src = NULL;
	PNODE desti = NULL;
	PNODE desti1 = NULL;

	InsertFirst(&src,70);
	InsertFirst(&src,30);
	InsertFirst(&src,30);
	
	InsertSecond(&desti,40);
	InsertSecond(&desti,30);
	InsertSecond(&desti,20);	
	InsertSecond(&desti,10);
	
	Display(src);
	
	printf("\n---------------------------------------------------------------------------\n");	
	Concat(&src,&desti);
	Display(desti);
	
	printf("\n---------------------------------------------------------------------------\n");	
	ConFirstN(&src,&desti,2);
	Display(desti);

	printf("\n---------------------------------------------------------------------------\n");	
	LLCopy(&src,&desti1);
	Display(desti1);
}