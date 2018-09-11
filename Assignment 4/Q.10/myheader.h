/*
	10. Write a program which accept one number from user and
	return difference between addition of its even digits and addition
	of odd digits.
	
	START
		 Create one variable as sEven and sOdd set value is zero
		 Iterate till ino is not equal to zero
			Get separate  variable as digit
			mode the ino by 10 and store reminder into idigit
			if digit mode two equal equal zero 
				then take addition of sEven and idigit and store into eEven
			else
				then take addition of sOdd and idigit and store into eOdd	
			divide ino by ten and store into ino			
		Continoe
		
		return substration of sEven and eOdd
	STOP
	
*/

#include<stdio.h>
#define TRUE 0
#define FALSE 1

typedef unsigned int UINT;
typedef unsigned long int LONG;

UINT DiffDigit(LONG);