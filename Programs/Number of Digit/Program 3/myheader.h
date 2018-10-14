/*  
   Accept no. from user as well as one digit from user and check whether that digit is occurse in your number or not 
    input: 157 7
    output:  TRUE

    START 
        Accept input as no and digit as value
        create one number as digit
        iterate till number is not equal to 0
            get separate digit into variable digit

            if digit is same as value
                then break iteration
            divide number by 10
        continue

        if number become zero
            return false
        else
            return true
    STOP
            
    
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef long int LONG;
typedef unsigned int UINT;
typedef int BOOL;
BOOL ChkDigit(LONG,UINT);
