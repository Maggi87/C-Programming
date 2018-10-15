#include<stdio.h>
#include"myheader.h"

#define TRUE 1
#define FALSE 0
typedef int BOOL;

int main()
{
	BOOL Running = TRUE;
	int iChoice = 0, iNo = 0;
	
	printf("\n-- Marvellous Infosystems : Pattern Printing Application --\n\n");
	while(Running)
	{
		printf("\nEnter Number : \t");
		scanf("%d",&iNo);

		printf("\nEnter the Choice\n");
		scanf("%d",&iChoice);

		switch(iChoice)
		{
			case 1:
				Pattern1(iNo);
				break;
			case 2:
				Pattern2(iNo);
				break;
			case 3:
				Pattern3(iNo);
				break;
			case 4:
				Pattern4(iNo);
				break;
			case 5:
				Pattern5(iNo);
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
