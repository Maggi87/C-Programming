/*
	7. Accept one numbers from user and count digits which are
	greater than 5.
	
	START
		 Create one variable as iCounter and set value is zero
		 Iterate till ino is not equal to zero
		 Get separate  variable as digit
			mode the ino by 10 and store reminder into idigit
			if digit grater equal 5
				increament iCounter by one
			divide ino by ten and store into ino
		Continue
		
		return iCounter
	STOP
*/

#include<stdio.h>

#define TRUE 0
#define FALSE 1

typedef unsigned int UINT;
typedef unsigned long int LONG;

UINT DigitX(LONG);