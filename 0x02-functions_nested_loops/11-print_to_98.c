#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - entry point
 *
 * @num: variable
 */
void print_to_98(int num)
{
	while (num < 98)
	{
		printf("%d, ", num);
		num++;
	}
	while (num > 98)
	{
		printf("%d, ", num);
		num--;
	}
	if (num == 98)
	{
		printf("%d\n", num);
	}

}
