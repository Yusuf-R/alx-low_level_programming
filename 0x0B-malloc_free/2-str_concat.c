#include "main.h"
#include "stddef.h"
#include "stdlib.h"
#include "string.h"

/**
*str_concat - this function that concatenates two strings.
*to a newly allocated space in memory.
*
*@s1: the string 1
*@s2: the string 2
*
*Return: Returns 0 the concatenation and error for NULL
*/

char *str_concat(char *s1, char *s2)
{

	char *mem;
	int len1, len2, count, cat_L;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	for (count = 0; s1[count] != '\0'; count++)
	{
		len1++;
	}
	count = 0;

	for (count = 0; s2[count] != '\0'; count++)
	{
		len2++;
	}
	cat_L = len1 + len2;
	mem = malloc(sizeof(*mem) * cat_L);

	if (mem == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < len1; count++)
	{
		mem[count] = s1[count];
	}
	for (count = 0; count < len2; count++)
	{
		mem[len1 + count] = s2[count];
	}
	return (mem);
}
