#include "main.h"
#include <stdlib.h>

/**
*argstostr - function that concatenates all the arguments:w
*from the command line
*@ac: argument count == argc
*@av: vector to each of the argument count indexes
*Return: the concatenates if successful else NULL
*/

char *argstostr(int ac, char **av)
{
	int i, j, len_argv, k_len, cat_len;
	char *mem;

	cat_len = k_len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len_argv = 0;

		for (j = 0; av[i][j] != '\0'; j++)
		{
			len_argv++;
		}
		cat_len += len_argv;
		cat_len++;
	}
	mem = (char *) malloc(sizeof(*mem) * cat_len + 1);
	if (mem == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			mem[k_len] = av[i][j];
			k_len++;
		}
		mem[k_len] = '\n';
		k_len++;
	}
	return (mem);
}
