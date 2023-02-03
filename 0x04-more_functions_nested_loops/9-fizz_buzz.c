#include <stdio.h>

/**
 * main  - To play the game of Fizz Buzz
 * Return: 0 Success
 */

int main(void)
{
	int n_count;

	for (n_count = 1; n_count <= 100; n_count++)
	{
		if ((n_count % 3 == 0) && (n_count % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n_count % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n_count % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n_count);
		}

		if (n_count != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

