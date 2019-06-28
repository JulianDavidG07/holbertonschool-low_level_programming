#include "holberton.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: the size of the triangle
 * Return: 0 success
 */

void print_triangle(int size)
{
	int vert, hor, space;

	if (size <= 0)
	{
		_putchar(10);
	}

	for (vert = 0; vert < size; vert++)
	{
		space = size - vert;

		for (hor = 1; hor <= size; hor++)
		{
			if (hor < space)
			{
				_putchar(' ');
			}
			else
			{
			_putchar(35);
			}
		}

		_putchar(10);
	}
}
