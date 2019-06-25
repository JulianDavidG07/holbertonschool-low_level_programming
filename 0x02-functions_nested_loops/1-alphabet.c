#include "holberton.h"
/*
 * print_alphabet: print all alphabet
 *
 *
 */

void print_alphabet(void)
{
int letter;
for (letter = 97; letter <= 122; letter++)
_putchar (letter);
_putchar (10);
}
