#include "holberton.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line
 *
 * Return: 0 success
 */
void print_triangle(int size)
{
	int vert, hor, space;


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
