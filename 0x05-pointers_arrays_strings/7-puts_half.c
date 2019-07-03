#include "holberton.h"

/**
 * puts_half - returns half of string
 * @str: type char
 *
 * Return: half of string
 */


void puts_half(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	a++;

	for (a /= 2; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
