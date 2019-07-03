#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print `n` elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Return: arrays
 */

void print_array(int *a, int n)
{
	int b = 0;

	while (b < n)
	{
		printf("%d", a[b]);

		if (b < (n - 1))
		{
			printf(", ");
		}

		b++;
	}
	printf("\n");
}
