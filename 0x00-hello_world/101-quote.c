#include <unistd.h>

/**
 * main - This will print out to stdandard error
 * without the use of printf and puts
 *
 * Return: Always 1.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	59);

	return (1);
}
