#include "holberton.h"
/**
 * jack_bauer - print every minute of the day of Jack Bauer
 * @num: variable
 * Return: time day
 */
void jack_bauer(void)
{
	int num = 30;

	while (num <= 39)
	{
		_putchar(num + '0');
		num++;
	}

}
