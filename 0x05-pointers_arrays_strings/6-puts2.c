#include "holberton.h"

/**
 * puts2 - prints one char out of 2
 * @str: string
 * Return: none
 */

void puts2(char *str)
{
	int num = 0;

	while (str[num] != 0)
	{
		if (num % 2 == 0)
		{
			_putchar(str[num]);
		}

		num++;
	}
	_putchar('\n');
}
