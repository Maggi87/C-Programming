/*
	2. Write a program which accept one number from user and
	return addition of its even digits.
	
	START
		 Create one variable as sEven and set value is zero
		 Iterate till ino is not equal to zero
			Get separate  variable as digit
			mode the ino by 10 and store reminder into idigit
			if digit mode two equal equal zero 
				then take addition of esum and idigit and store into esum
			divide ino by ten and store into ino			
		Continoe
	STOP
	
*/

#include<stdio.h>
#define TRUE 0
#define FALSE 1

typedef unsigned int UINT;
typedef unsigned long int LONG;

UINT EvenDigit(LONG);