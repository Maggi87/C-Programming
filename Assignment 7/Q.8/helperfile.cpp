/*
	8. Accept one character from user and depends on that character
display its type. 
*/


#include<stdio.h>
#include"myheader.h"
void Display(char c)
{
	if((c>=65)&&(c<=90))
    {
         printf ("It is Capital");   
    }  
	if((c>=97)&&(c<=121))
    {
         printf ("It is Small");   
    }
	if((c>=48)&&(c<=57))
    {
         printf ("It is Digit");   
    }  
    
}