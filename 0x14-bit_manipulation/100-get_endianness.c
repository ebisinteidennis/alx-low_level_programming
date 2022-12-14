#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 *
 */
int get_endianness(void)
{
	unsigned int x;
	char *y;

	x = 1;
	y = (char *) &x;
	if (*y)
		return (1);
	return (0);
}
