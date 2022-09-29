#include "main.h"

/**
*_strlen_recursion - The function prints the lengh of a string
*
*@s: pointer to the string to be counted
*
*Return: Always 0.
*/

int _strlen_recursion(char *s)
{
	int src_len;
	
	src_len = 0;
	if (*s != '\0')
	{
		src_len++;
		src_len++ + _strlen_recursion(s + 1);
	}
	else if (*s == '\0')
	{
		return(src_len);
	}
}
