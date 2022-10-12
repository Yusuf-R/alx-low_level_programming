#include "function_pointers.h"

/**
*print_name - The function prints a name
*
*@name: pointer to the name of the person
*@f: the function pointer
*Return: Nothing.
*/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
