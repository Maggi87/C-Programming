/*
	5. Accept one numbers from user and return its reverse number.
	
	START
		 Create one variable as iRem and iRev and set value is zero
		 Iterate till ino is not equal to zero
		 	mode the ino by 10 and store reminder into iRem
			to take multiplication of irev into 10 and  take addition of iRem and store into irev and			
			divide ino by ten and store into ino
		Continue
		
		return iRev
	STOP
*/

#include<stdio.h>
#define TRUE 0
#define FALSE 1

typedef unsigned int UINT;
typedef unsigned long int LONG;

UINT Reverse(LONG);