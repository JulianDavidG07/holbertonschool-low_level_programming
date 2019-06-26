#include "holberton.h"
/**
 * print_last_digit - prints last digit
 *
 * @dig: variable
 *
 * Return: the value of last digit
 */

int print_last_digit(int dig)
{
	int num;

	num = dig % 10;

	if (dig < 0)

		num *= -1;

	_putchar('0' + num);

	return (num);
}
