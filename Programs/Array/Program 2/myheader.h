/*
	Accept array from user and display below output
	
	input : brr = {2,3,4,5,7}
	output : * *
	         $ $ $
			 * * * *
			 $ $ $ $ $
			 $ $ $ $ $ $ $
			 
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
