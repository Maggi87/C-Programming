#include<stdio.h>
#include</home/user/Desktop/C Program/myheader.h>
void Display(int *arr,int Col)
{
    int i=0;
    if(NULL==arr)
    {
        return;
    }

    printf("\nArray of Element \n");
    for(i=0;i<Col;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");


}