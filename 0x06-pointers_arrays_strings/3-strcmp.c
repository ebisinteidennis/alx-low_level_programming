#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: 0 is strings are equal else, defference between strings
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 != '\0' && *s2 != '\0'; s2++)
		if (*s1 != *s2)
			return (*s1 - *s2);
	if (*s1 != '\0')
		return (*s1);
	else if (*s2 != '\0')
		return (*s2);

	return (0);
}
