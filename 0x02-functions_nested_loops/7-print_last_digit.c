#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit - last digit number
 * Return: num
 * @num: variable
 */
int print_last_digit(int num)
{
	int nume;

	nume = num % 10;

	if (num < 0)

		num *= -1;
	_putchar ('0' + nume);

	return (nume);
}
