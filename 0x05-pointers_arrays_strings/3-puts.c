#include "holberton.h"

/**
 * _puts - function that prints a string, followed by a new line
 * @str: variable
 * Return: SucessString
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
