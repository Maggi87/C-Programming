#include<stdio.h>
#include<malloc.h>
#include</home/user/Desktop/C Program/myheader.h>
int main()
{
	int iCol = 0;
	int *arr = NULL;
	int i = 0;

	printf("Enter the Number of Coloum\n");
	scanf("%d",&iCol);

	arr = (int *)malloc(iCol * (sizeof(int *)));
	
	printf("\nEnter Array of Element \n");
	for(i=0;i<iCol;i++)
	{
		scanf("%d",&arr[i]);
	}

	Display(arr,iCol);

	free(arr);
	
	return 0;
}