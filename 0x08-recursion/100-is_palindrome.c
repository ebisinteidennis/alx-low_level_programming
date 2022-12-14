#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string length to find
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * check_palindrome - check if a string is a palindrome
 *
 * @s: string to check
 * @x: left index
 * @y: right index
 *
 * Return: 1 if s is a palindrome, else 0
 *
 */
int check_palindrome(char *s, int x, int y)
{
	if (x >= y)
		return (1);
	if (s[x] != s[y])
		return (0);
	return (check_palindrome(s, x + 1, y - 1));
}
/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string to check
 *
 * Return: 1 if s is palindrome, else 0
 *
 */
int is_palindrome(char *s)
{
	return (check_palindrome(s, 0, _strlen_recursion(s) - 1));
}
