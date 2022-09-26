#include <stdio.h>
#include "main.h"

/**
* _memset - This function will set the value it points to via address
* @s: The pointer which idicates the strating address to be filled
* @b: The value to be filled
* @n: The number bytes to be filled starting from the pointer
* Return: Returns O. for Success
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = 'b';
	}

	return (dest);
}
