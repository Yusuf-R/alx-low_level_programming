#include <stdio.h>
#include "main.h"

/**
* _strncat - This function will cat two strings by appending base
* on the user define buffer lenght
* @dest: The pointer to the destination string
* @src: The pointr to the source string
* @n: The user define buffer length
* Return: Returns O. for Success
*/

char *_strncat(char *dest, char *src, int n)
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
			dest[dest_len + iter] = src[iter];
		}
	dest[dest_len + iter] = '\0';
	return (dest);
	}
	else
	{
		for (iter = 0; iter <= src_len; iter++)
		{
			dest[dest_len + iter] = src[iter];
		}
	return (dest);
	}
}
