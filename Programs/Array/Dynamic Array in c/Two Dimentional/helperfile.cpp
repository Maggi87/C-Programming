#include<stdio.h>
#include</home/user/Desktop/C Program/myheader.h>
void Display(int **arr,int iRow,int Col)
{
    int i=0,j=0;
    if(NULL==arr)
    {
        return;
    }

    printf("\nArray of Element \n");
    for(i=0;i<iRow;i++)
    {
        printf("\n");
        for(j=0;j<Col;j++)
        {
            printf("%d\t",arr[i][j]);
        }
    }

    printf("\n");


}