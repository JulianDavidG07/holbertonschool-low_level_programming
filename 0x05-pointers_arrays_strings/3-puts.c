#include "holberton.h"

/**
 * void _puts(char *str) - function that prints a string, followed by a new line, to stdout
 *
 * Return:
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
