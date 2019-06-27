#include "holberton.h"
/**
 * print_diagonal - print a line in diagonal
 * @n: number of the character
 * Return: 0 success
 */
void print_diagonal(int n)
{
	int vert, hor;

	if (n <= 0)
	{
		_putchar(10);
	}
	for (vert = 0; vert < n; vert++)
	{
		for (hor = 0; hor < vert; hor++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar(10);
	}
}
