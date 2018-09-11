/*
	9. Write a program which accept one number from user and
	return addition of its odd digits.
	
	START
		 Create one variable as sEven and sOdd set value is zero
		 Iterate till ino is not equal to zero
			Get separate  variable as digit
			mode the ino by 10 and store reminder into idigit
			if digit mode two not equal zero 
				then take addition of eOdd and idigit and store into eOdd
			divide ino by ten and store into ino			
		Continoe
	STOP
*/

#include<stdio.h>

#define TRUE 0
#define FALSE 1

typedef unsigned int UINT;
typedef unsigned long int LONG;

UINT OddDigit(LONG);