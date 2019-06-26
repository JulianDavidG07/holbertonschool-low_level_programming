#include "holberton.h"
/**
 * print_alphabet - alphabet list
 * @letter: variable
 * Return: chars
 */
void print_alphabet(void)
{
int letter;
for (letter = 97; letter <= 122; letter++)
_putchar (letter);
_putchar (10);
}
