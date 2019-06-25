#include "holberton.h"
/**
 * print_last_digit - last digit number
 * Return: num
 * @dig: variable
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
