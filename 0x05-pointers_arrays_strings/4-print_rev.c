#include "holberton.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: variable
 * Return : char invers
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;

	while (s[a] != 0)
	{
		_putchar(s[a]);
		a--;
	}

	_putchar('\n');
}
