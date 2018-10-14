/*  
    Accept no. from user and return reverse number
    input: 157
    output:  751

    START 
        Accept input as no and digit as value
        create one number as rev
        iterate till number is not equal to 0
            get separate digit into variable digit
            add digit into iRev
            remove digit from no
            divide number by 10
        continue

        retun true
    STOP          
    
*/

#include<stdio.h>
typedef long int LONG;
//typedef unsigned int UINT;
//typedef int BOOL;
LONG Reverse(LONG);
