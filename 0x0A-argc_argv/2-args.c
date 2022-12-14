#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguements it receives
 *
 * @argc: arguement count
 * @argv: arguement array
 *
 * Description: print all arguements paased on a new line
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}
