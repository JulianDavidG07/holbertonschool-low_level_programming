#include "holberton.h"
/**
 * print_alphabet - alphabet list
 * @lt: variable
 * Return 10
 */

void print_alphabet(void)
{
	int lt;

	for (lt = 97; lt <= 122; lt++)
		_putchar(lt);

	_putchar(10);
}
