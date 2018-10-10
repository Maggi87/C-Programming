
#include<stdio.h>
#include"myheader.h";

/*
	i/p : 5
	o/p : *****
*/
void pattern1(int no)
{
	int i = 0;

	for(i=1;i<=no;i++)
	{
		printf("$");
	}
	printf("\n");
}
/*
	i/p: 5
	o/p: $# $# $# $# $#
*/
void pattern2(int no)
{
	int i = 0;

	for(i=1;i<=no;i++)
	{
		printf("$#");
	}
	printf("\n");
}
/*
	i/p: 5
	o/p: 1* 2* 3* 4* 5*
*/
void pattern3(int no)
{
	int i = 0;

	for(i=1;i<=no;i++)
	{
		printf("%d *\t",i);
	}
	printf("\n");
}
/*
	i/p: 5
	o/p: 1 3 5 7 9
*/
void pattern4(int no)
{
	int i = 0;

	for(i=1;i<=no*2;i=i+2)
	{
		printf("%d\t",i);
	}
	printf("\n");
}
/*
	i/p: 5
	o/p: 1 2 3 4 5 5 4 3 2 1
*/
void pattern5(int no)
{
	int i = 0;

	for(i=1;i<=no;i++)
	{
		printf("%d\t",i);
	}
	for(i=no;i>=1;i--)
	{
		printf("%d\t",i);	
	}
	printf("\n");
}
/*
	i/p: 5
	o/p: 1 3 9 27 81 243 729
*/
void pattern6(int no1,int no2)
{
	int i = 0, iMul = 1;

	for(i=1;i<=no1;i++)
	{
		printf("%d\t",iMul);
		iMul = iMul * no2;
	}
	printf("\n");
}
/*
	-4 -3 -2 -1 0 1 2 3 4 
*/
void pattern7(int no)
{
	int i = 0;
	for(i=-no;i<=no;i++)
	{
		printf("%d\t",i);
	}
	printf("\n");
}