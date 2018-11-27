#include<stdio.h>
#include"myheader.h"
#define TRUE 1
#define FALSE 0
typedef int BOOL;

int main()
{
	BOOL Running = TRUE;
	int iChoice = 0, iValue1 = 0, iValue2 = 0;
	printf("\n-- Marvellous Infosystems : Pattern Printing Application --\n\n");
	while(Running)
	{
		printf("\nEnter number of Rows : \t");
		scanf("%d",&iValue1);
		printf("\nEnter number of Columns : \t");
		scanf("%d",&iValue2);
		printf("\nEnter your choice\n");
		scanf("%d",&iChoice);

		switch(iChoice)
		{
			case 1:
				Pattern1(iValue1);
				break;
			case 2:
				Pattern2(iValue1);
				break;
			case 3:
				Pattern3(iValue1,iValue2);
				break;
			case 4:
				Pattern4(iValue1,iValue2);
				break;
			case 5:
				Pattern5(iValue1,iValue2);
				break;
			case 6:
				Pattern6(iValue1,iValue2);
				break;
			case 7:
				Pattern7(iValue1,iValue2);
				break;
			case 8:
				Pattern8(iValue1,iValue2);
				break;
			case 9:
				Pattern9(iValue1,iValue2);
				break;
			case 10:
				Pattern10(iValue1,iValue2);
				break;
			case 0:
				Running = FALSE;
				break;
			default:
				printf("Wrong choice\n");
				break;
		}
	}
	printf("\nTerminating Pattern prinnting Application....\n");
	return 0;
}
