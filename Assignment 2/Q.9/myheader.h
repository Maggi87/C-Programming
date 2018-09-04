/*
	9. Accept one number and print that number of elements from Fibonacci series.
	
	START
		Accept one number from user as no
		Initialize the variable a=0 and b = 1 and c= 0;
		print a and b
		Iterate till iCno is less than equal to iValue
			add from a and b and store in c
			Copy value of b to a
			Copy value of c to b
			increase value of iCnt by one
			contiguous
			
			print c
	STOP
*/

#include<stdio.h>
void Fibonacci(int iValue);