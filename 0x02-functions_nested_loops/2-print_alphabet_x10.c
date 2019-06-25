#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet x10
 *
 */
void print_alphabet_x10(void)
{
	int contador, letter;

	for (contador = 0; contador < 10; contador++)

	{
		for (letter = 97; letter <= 122; letter++)
			_putchar(letter);

		_putchar(10);
	}
}
