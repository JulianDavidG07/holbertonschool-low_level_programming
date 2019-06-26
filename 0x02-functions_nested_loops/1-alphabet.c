#include "holberton.h"
/**
 * print_alphabet - alphabet list
 *
 * Return: 10
 */

void print_alphabet(void)
{
	char lt = 'a';

	while (lt <= 'z')
	{

		_putchar(lt);
		lt++;
	}
	_putchar('\n');
}
