#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, including the
 * terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: A source string to cpoy.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index_s, index_d, index_cat;
	int src_len = 0;
	int dest_len = 0;

	for (index_s = 0; src[index_s] != '\0'; index_s++)
	{
		src_len++;
	}
	for (index_d = 0; dest[index_d] != '\0'; index_d++)
	{
		dest_len++;
	}
	for (index_cat = 0; index_cat <= src_len; index_cat++)
	{
		dest[index_cat] = src[index_cat];
	}

	return (dest);
}
