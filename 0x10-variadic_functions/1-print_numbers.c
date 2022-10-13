#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_numbers - this function returns the sum of*  all its parameters.
* @separator: the separtor
* @n: the guard
* Return: the print of the input
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argz;

	if (n > 0)
	{
		if (separator == NULL)
			separator = "";
		va_start(argz, n);
		printf("%d", va_arg(argz, int));
		for (i = 1; i < n ; i++)
		{
			printf("%s%d", separator, va_arg(argz, int));
		}
	va_end(argz);
	printf("\n");
	}
}
