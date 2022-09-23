#include <stdio.h>
#include "main.h"

/**
* _strncpy - a function that copies a string
* @dest: a pointer to the destination string
* @src: a pointer to the source string
* @n: number of bytes from src to be copied
* Return: returns dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int src_len = 0;
	int dest_len = 0;
	int iter = 0;

	for (iter = 0; dest[iter] != '\0'; iter++)
	{
		dest_len++;
	}

	for (iter = 0; src[iter] != '\0'; iter++)
	{
		src_len++;
	}
	if (n <= src_len)
	{
		for (iter = 0; iter < n; iter++)
		{
			dest[iter] = src[iter];
		}
		return (dest);
	}
	else if (n > src_len)
	{
		for (iter = 0; iter < n; iter++)
		{
			dest[iter] = src[iter];
		}
		for (iter = src_len; iter < n; iter++)
		{
			dest[iter] = '\0';
		}
		return (dest);
	}
return (dest);
}
