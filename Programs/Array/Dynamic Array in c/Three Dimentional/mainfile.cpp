#include<stdio.h>
#include<malloc.h>
#include</home/user/Desktop/C Program/myheader.h>
int main()
{
	int first = 0, second = 0, third = 0;
	int ***arr;
	int i = 0, j = 0, k = 0;

	printf("\nEnter the first , second and third \n");
	scanf("%d %d %d",&first,&second,&third);

	arr = (int ***)malloc(first * sizeof(int *));

	for(i=0;i<first;i++)
	{
		arr[i] = (int **)malloc(second * sizeof(int *));
		for(j=0;j<second;j++)
		{
			arr[i][j]= (int *)malloc(third * sizeof(int *));
		}
	}

	printf("\nEnter the arrat of element\n");
	for(i=0;i<first;i++)
	{
		printf("\nSecond Loop\n");
		for(j=0;j<second;j++)
		{
			printf("\nThird Loop\n");
			for(k=0;k<third;k++)
			{
				scanf("%d",&arr[i][j][k]);
			}
		}
	}

	Display(arr,first,second,third);

	printf("\nFree Allocated Memory\n");
	for(i=0;i<first;i++)
	{
		for(j=0;j<second;j++)
		{
			free(arr[i][j]);
		}
		free(arr[i]);
	}
	free(arr);

	return 0;
}