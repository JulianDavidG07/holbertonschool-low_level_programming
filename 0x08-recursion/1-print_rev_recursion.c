#include "holberton.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: string
 * Return: string reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar(10);
	}
}
