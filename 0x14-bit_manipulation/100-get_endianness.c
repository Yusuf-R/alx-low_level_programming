#include "main.h"

/**
 * get_endianness -  checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int x = 1;
	char *edia = (char *)&x;

	if (*edia)
		return (1);
	return (0);
}
