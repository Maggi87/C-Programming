/*
	1.Write a program which accept one number from user and return
	multiplication of its digits. (If number contains 0 then ignore that 0)
	
	Algorithm
	
	START
		 Create one variable as Mutli and set value is one
		 Iterate till ino is not equal to zero
		 Get separate  variable as digit
			mode the ino by 10 and store reminder into idigit
			if digit equal equal zero 
				then plus digit by one
			multiplication the multi into idigit and store into multi
			divide ino by ten and store into ino
			
		Continoe
	STOP
*/

#include<stdio.h>
#define TRUE 0
#define FALSE 1

typedef unsigned int UINT;
typedef unsigned long int LONG;

UINT MultiDigit(LONG);