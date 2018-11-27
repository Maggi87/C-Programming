#include<stdio.h>
#include"myheader.h"
#include<malloc.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

int main()
{
	BOOL Running = TRUE;
	int iChoice = 0, iSize = 0,i = 0;
	int *arr = NULL;
	printf("\n-- Marvellous Infosystems : Pattern Printing Application --\n\n");
	while(Running)
	{
		printf("\nEnter size of Array : \t");
		scanf("%d",&iSize);

		arr = (int *)malloc(iSize * sizeof(int));
		if(NULL == arr)
		{
			printf("Error in memory allocation\n");
			return -1;
		}

		printf("\nEnter the Array Element\n");
		for(i=0;i<iSize;i++)
		{
			scanf("%d",&arr[i]);
		}
		
		printf("\nEnter the Choice\n");
		scanf("%d",&iChoice);

		switch(iChoice)
		{
			case 1:
				Pattern1(arr,iSize);
				break;
			case 2:
				Pattern2(arr,iSize);
				break;
			case 3:
				Pattern3(arr,iSize);
				break;
			case 4:
				Pattern4(arr,iSize);
				break;
			case 5:
				Pattern5(arr,iSize);
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
	free(arr);
	return 0;
}
