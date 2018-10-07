#include<stdio.h>
#include<malloc.h>
#include</home/user/Desktop/C Program/myheader.h>
int main()
{
	int iCol = 0, iRow = 0;
	int **arr = NULL;
	int i = 0, j =0;

	printf("Enter the Number of Row & Coloum\n");
	scanf("%d %d",&iRow,&iCol);

	arr = (int **)malloc(iRow * (sizeof(int *)));

	for(i=0;i<iRow;i++)
	{
		arr[i] = (int *)malloc(iCol * sizeof(int *));
	}
	
	printf("\nEnter Array of Element \n");
	for(i=0;i<iRow;i++)
	{
		printf("New Row\n");
		for(j=0;j<iCol;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		
	}
	Display(arr,iRow,iCol);

	for(i=0;i<iRow;i++)
	{
		free(arr[i]);
	}
	free(arr);

	return 0;
}