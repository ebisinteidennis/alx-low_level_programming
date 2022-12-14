#include <stdio.h>
#include "main.h"

/**
 * _isupper - check if character is uppercase
 * @c: character to be processed
 * Return: 1 if c is uppercase, else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
