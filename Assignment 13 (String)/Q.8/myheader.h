/*
	8. Write a program which 2 strings from user and check whether
	first N contents of two strings are equal or not. (Implement
	strcmp() function).
	Note : If third parameter is greater than the size of second string
	then concat whole string after first string.
	Input : “Marvellous Infosystems”
	“Marvellous Logic Building”
	10
	Output : TRUE
*/
#define TRUE 1
#define FALSE 2
typedef long int BOOL;
BOOL StrNCmpX(char *, char *,int);
