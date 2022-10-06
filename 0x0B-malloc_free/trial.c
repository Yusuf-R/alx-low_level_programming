#include "main.h"
#include <stdlib.h>

/**
*strtow - function returns a pointer to an array of strings (words)
*@str: pointer variable to the string
*Return: the concatenates if successful else NULL
*/

char **strtow(char *str)
{
	int i, j, len_argv, k_len, cat_len;
	char **mem;

	cat_len = k_len = 0;

	if (str == NULL || av == "")
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' && str[i - 1] != ' ' && str[i - 1] != '\0')
		{
			len++;
		}
	}






















		}len_argv = 0;



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
