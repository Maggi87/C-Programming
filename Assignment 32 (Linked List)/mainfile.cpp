#include"myheader.h"

int main()
{
	PNODE src = NULL;
	PNODE desti = NULL;
	PNODE desti1 = NULL;
	PNODE iRet;
	PNODE RRet;

	InsertFirst(&src,100);
	InsertFirst(&src,90);
	InsertFirst(&src,80);
	InsertFirst(&src,70);
	InsertFirst(&src,30);
	InsertFirst(&src,30);
	
	InsertSecond(&desti,40);
	InsertSecond(&desti,30);
	
	Display(src);
	
	printf("\n---------------------------------------------------------------------------\n");	
	//iRet = Concat(&src,&desti);
	//Display(iRet);
	
	printf("\n---------------------------------------------------------------------------\n");	
	//iRet = ConFirstN(&src,&desti,2);
	//Display(iRet);

	printf("\n---------------------------------------------------------------------------\n");	
	iRet = ConcatListRange(&src,&desti,2,5);
	Display(iRet);

	printf("\n---------------------------------------------------------------------------\n");	
	RRet = LLCopy(&src,&desti1);
	Display(RRet);
}