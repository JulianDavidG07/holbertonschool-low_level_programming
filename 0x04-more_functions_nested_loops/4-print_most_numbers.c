#include "holberton.h"
/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 *
 * Return: m
 */

void print_most_numbers(void)

{
	int m = 0;

	while (m <= 9)
	{
		if (m != 2 && m != 4)

			_putchar (m + '0');
	       m++;
	}
	_putchar ('\n');
}
