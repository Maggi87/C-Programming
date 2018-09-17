
/*
	2. Write a program which accept number from user and check
whether that number is strong number or not. When the sum of
the factorial of a number's individual digits are equal to the
number itself, then that number is called a strong number.
Input : 145 since 1! + 4! + 5! = 1 + 24 + 120 = 145
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkStrong(int);