/*
	8. Accept two arrays from user and check whether that arrays are
	equal or not.
	Input : 10 20 30 40 50 60
	10 20 30 40 50 60
	Output : Arrays are equal
*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ArrayCompare(int *, int,int *, int);
void Display(BOOL);