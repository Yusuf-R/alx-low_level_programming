#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*digit_check - checks if the string is of digit
*
*@str_input: The input string
*
*Return: 0 for true, 1 for error
*/

int digit_check(char *str_input)
{
	int p;

	for (p = 0; str_input[p] != '\0'; p++)
	{
		if (str_input[p] < '0' || str_input[p] > '9')
		{
			return (1);
		}
	return (0);
	}
	return (0);
}

/**
*main - This program demonstrates the argument to main
*arguments to main provide a useful opportunity to
*give parameters to programs.
*
*@argc: Called ARGumentCount, it counts the arguments
*supplied to the program
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
			if (digit_check(argv[i]) == 1)
			{
				printf("Error\n");
				return (0);
			}

			valid = atoi(argv[i]);
			sum = sum  + valid;
		}
		printf("%d\n", sum);
	}
	return (0);
}
