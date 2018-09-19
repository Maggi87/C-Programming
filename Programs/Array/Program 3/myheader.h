/*
	Accept Array from user and display below out put without using if else and switch condition
	input : brr = {3,2,5,4,1}
	output = $ $ $
	         * *
			 $ $ $ $ $
			 * * * *
			 $
	note : display above output without using if else and switch condition
	
	Algorithm
		START 
			Iterate the array from 1st element to last element 
				consider element from array as iNo
				iterate from i to iNo	
					if i complete divide by 2 
						    print '*'
					else
							print '$'
					increment counter by one
				continue
			continue
		STOP
*/

void Display(int *,int);
