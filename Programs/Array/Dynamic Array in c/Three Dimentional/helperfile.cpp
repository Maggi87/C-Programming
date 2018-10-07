#include<stdio.h>
#include</home/user/Desktop/C Program/myheader.h>
void Display(int ***arr,int first,int second,int third)
{
    int i=0,j=0,k=0;
    if(NULL==arr)
    {
        return;
    }

    for(i=0;i<first;i++)
    {
        printf("\n");
        for(j=0;j<second;j++)
        {
            printf("\n");
            for(k=0;k<third;k++)
            {
                printf("%d\t",arr[i][j][k]);
            }
        }
    }
    
    printf("\n");


}