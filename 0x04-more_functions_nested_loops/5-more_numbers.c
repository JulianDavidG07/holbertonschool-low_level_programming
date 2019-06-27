#include "holberton.h"
/**
 * more_numbers - 0 to 14
 *
 * Return: 0 to success
 *
 */
void more_numbers(void)
{
	int an, bn;

	for (bn = 0; bn < 10; bn++)
	{
		for (an = 0; an <= 14; an++)
		{
			if (an >= 10)
			{
				_putchar((an / 10) + '0');
			}
			_putchar((an % 10) + '0');
		}
		_putchar(10);
	}
}
