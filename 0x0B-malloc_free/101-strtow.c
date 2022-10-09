#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - this function splits a string into words
 * @str: The string
 * Return: On success 1.
 */

char **strtow(char *str)
{
	 char **memory;
	int i, j, k, word_count, data, dt;

	data = word_count = dt = 0;
	if (str ==  NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		word_count++;
	}
	memory = malloc(sizeof(char *) * (word_count + 1));
	if (memory == NULL)
	return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			data++;
			if ((str[i + 1] == ' ') || (str[i + 1] == '\0'))
			{
				memory[dt] = malloc(sizeof(char) * (data + 1));
				if (memory[dt] == NULL)
				{
					for (k = 0; k < dt; k++)
						free(memory[k]);
					free(memory);
					return (NULL);
				}
				for (j = 0; j < data; j++)
				memory[dt][j] = str[i - data + 1 + j];
				memory[dt][j] = '\0';
				data = 0;
				dt++;
			}
		}
	}
	memory[word_count] = NULL;
	return (memory);
}
