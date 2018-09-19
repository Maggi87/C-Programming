/*
	Accept array from user accept one number from  and return last occurrence number of that number(using revers loop) 
	input : brr[6] = {5, 4 , 6 , 5 ,8} Search No : 5
	output : 3
	
	Algorithm
		START 
			consider element from array as iNo
			iterate reverse from iNo to i-1	
				if i is equal to  iNo
						break loop
				increment counter by one
			continue	

			return i
		STOP
*/

#include<stdio.h>
int DisplayLast(int *,int,int);
