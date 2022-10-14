#include "variadic_functions.h"

/**
* print_all - this function prints anyting.
* @format: any of the format specifier
* Return: the print of the input
*/

void print_all(const char * const format, ...)
{
	va_list argz;
	char *check;
	char *sep = "";
	int i = 0;

	va_start(argz, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
			printf("%s%c", sep, va_arg(argz, int));
			break;

			case 'i':
			printf("%s%d", sep, va_arg(argz, int));
			break;

			case 'f':
			printf("%s%f", sep, va_arg(argz, double));
			break;

			case 's':
			check = va_arg(argz, char *);
			if (check == NULL)
			check = "(nil)";
			printf("%s%s", sep, check);
			break;
		}
		sep = ", ";
		i++;
	}
	va_end(argz);
	printf("\n");
}
