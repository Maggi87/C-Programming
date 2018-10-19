#include"myheader.h"
int main()
{

	BOOL Running = TRUE;
	int iChoice = 0;
	int  iRet = 0;
	PNODE first = NULL;
	printf("\n--Linked List Application --\n\n");
	while(Running)
	{
		printf("\n1:Inser First Element \t 2: Insert Last \t 3: Display \t 4: Count\n");
				
		printf("\nEnter your choice\n");
		scanf("%d",&iChoice);		
		switch(iChoice)
		{
			case 1:
					InsertFirst(&first,101);
					InsertFirst(&first,50);
					InsertFirst(&first,60);
					InsertFirst(&first,70);
					break;
			case 2:
					InsertLast(&first,80);
					InsertLast(&first,90);
					InsertLast(&first,100);
					break;
			case 3:
					Display(first);
					break;
			case 4:
					iRet = Count(first);
					printf("\nNumber of Element in LL:- %d\t",iRet);
					break;
			default:
					printf("Wrong choice\n");
					break;
		}
	}
	printf("\nTerminating prinnting Application....\n");
	return 0;
}