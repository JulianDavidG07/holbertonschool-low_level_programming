#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @num: number
 * Return: ult
 */
int print_last_digit(int num)
{
	int ult;

	ult = num % 10;
	if (ult < 0)
		ult *= -1;
	_putchar(ult + '0');
	return (ult);
}
