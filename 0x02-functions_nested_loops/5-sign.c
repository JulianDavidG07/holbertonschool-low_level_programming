#include "holberton.h"
/**
 * print_sign - function to return
 * @n: variable
 * Return: 1, 0, -1 for success
 */
int print_sign(int n)
{
	if (n > 48)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar(10);
}
