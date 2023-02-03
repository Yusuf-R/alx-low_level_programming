#include <stdio.h>
#include "main.h"

/**
* _memcpy - This function will copy the value it points to via address
* @dest: The destination for the copied src content
* @src: The source content which is a pointer
* @n: The number bytes to be filled starting from the pointer
* Return: Returns O. for Success
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *src_f = src;
	char *dest_f = dest;

	for (i = 0; i < n; i++)
	{
		dest_f[i] = src_f[i];
	}

	return (dest);
}
