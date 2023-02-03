#include <stdio.h>
#include "main.h"

/**
* _strcat - This function will cat two strings by appending
* @dest: The pointer to the destination string
* @src: The pointr to the source string
* Return: Returns O. for Success
*/

char *_strcat(char *dest, char *src)
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
	for (iter = 0; iter <= src_len; iter++)
	{
		dest[dest_len + iter] = src[iter];
	}
	return (dest);
}
