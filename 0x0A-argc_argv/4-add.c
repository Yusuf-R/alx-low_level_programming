#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*main - This program demonstrates the argument to main
*
*@argc: Called ARGumentCount, it counts the arguments
*
*@argv: is a pointer array which points to each
*argument passed to the program.
*
*Description - to adds positive numbers.
*
*Return: 0 if successful
*/

int main(int argc, char *argv[])
{
	int i;
	int sum;
	int valid;

	sum = 0;

	if (argc == 1)
		printf("%d\n", argc - 1);
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}

			valid = atoi(argv[i]);
			sum = sum  + valid;
		}
		printf("%d\n", sum);
	}
	return (0);
}
