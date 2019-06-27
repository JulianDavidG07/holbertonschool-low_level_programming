#include "holberton.h"
/**
 * print_numbers - function that multiplies two integers.
 * @m: variable 1
 * @k: variable 2
 * Return: m
 */

void print_numbers(void)

{
	int m = 0;
	int k = 9;

	while (m <= k)
	{
		_putchar (m + '0');
	m++;
	}
	_putchar ('\n');
}
