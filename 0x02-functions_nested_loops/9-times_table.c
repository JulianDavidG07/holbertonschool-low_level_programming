#include "holberton.h"
/**
 * times_table - Table of 1 - 9
 *
 * @
 * Return: table
 */
void times_table(void)
{
	int row, col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			if (row * col < 10)
			{
				if (col != 0)
				{
					_putchar (44);
					_putchar (32);
					_putchar (32);
				}
				_putchar ((row * col) % 10 + '0');
			}
			else
			{
				_putchar (44);
				_putchar (32);
				_putchar ((row * col) / 10 + '0');
				_putchar ((row * col) % 10 + '0');
			}
		}
		_putchar(10);
	}
}
