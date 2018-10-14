/*  
    Accept no. from user and count number of digit from that number
    input: 157
    output:  3

    START 
        Accept number as no
        create as one counter as iCnt
        iterate till no is not equal to zero
            divide no by ten and store into no
            increament iCnt by one
        continue
    STOP
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 2
typedef long int LONG;
typedef unsigned int UINT;
UINT CountDigit(int);
