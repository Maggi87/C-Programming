/*3. Write a program which display contents of linked list using recursive approach.
	void DisplayR(PNODE first)
	{
		if(________________)
		{
			// Logic
		}
	}
*/
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
	DisplayR(first);
	return 0;
}