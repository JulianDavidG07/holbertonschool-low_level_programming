#include "holberton.h"
/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 * @m: variable 1
 * @k: variable 2
 * Return: m
 */

void print_most_numbers(void)

{
	int m = 0;
	int k = 9;

	while (m <= k)
	{
		if (m != 2 && m != 4)

			_putchar (m + '0');
	       m++;
	}
	_putchar ('\n');
}
