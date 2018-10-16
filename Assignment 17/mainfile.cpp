#include<stdio.h>
#include"myheader.h"

#define TRUE 1
#define FALSE 0
typedef int BOOL;

int main()
{
	BOOL Running = TRUE;
	int iChoice = 0;
	char str[30] = {'\0'};
	
	printf("\n-- Marvellous Infosystems : Pattern Printing Application --\n\n");
	while(Running)
	{
		printf("\nEnter String : \t");
		scanf("%[^'\n']s",str);

		printf("\nEnter the Choice\n");
		scanf("%d",&iChoice);

		switch(iChoice)
		{
			case 1:
				Pattern1(str);
				break;
			case 2:
				Pattern2(str);
				break;
			case 3:
				Pattern3(str);
				break;
			case 4:
				Pattern4(str);
				break;
			case 5:
				Pattern5(str);
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
