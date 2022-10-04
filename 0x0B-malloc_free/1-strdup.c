#include "main.h"
#include "stddef.h"
#include "stdlib.h"
#include "string.h"

/**
*_strdup - this function returns a pointer
*to a newly allocated space in memory.
*
*@str: the total bytes to be filled the char c
*
*Return: Returns 0 fo success and NULL if error
*/

char *_strdup(char *str)
{

	char *mem;
	int i;
	int len;
	int count;

	len = 1;

	for (count = 0; str[count] != '\0'; count++)
	{
		len++;
	}

	if (str == NULL)
	{
		return (NULL);
	}
	mem = malloc(sizeof(*mem) * len);

	if (mem == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		mem[i] += str[i];
	}
	return (mem);
}
