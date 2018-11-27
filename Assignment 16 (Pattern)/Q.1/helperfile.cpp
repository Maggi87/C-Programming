/*
    1. Write a program which accept two inputs from user and display below
    pattern.
    Input : 4 4
    Output :
    * * * *
    *     *
    *     *
    * * * * 
*/
#include<stdio.h>
#include"myheader.h"
void pattern(int iRow,int iCol)
{
    int i = 0, j = 0;

    if(iRow<0)
    {
        iRow = -iRow;
    }

    if(iCol<0)
    {
        iCol = -iCol;
    }

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if((i==1)||(i==iRow)||(j==1)||(j==iCol))
            {
                printf("* \t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}