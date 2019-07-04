#include "holberton.h"
/**
 * rev_string - prints a string in reverse order
 * @s: variable
 * Return: string reverse
 */
void rev_string(char *s)
{

	int b, c;
	int length = _strlen(s);
	char position;

	b = 0;
	c = length;

	while (c >= b)
	{
		position = s[b];
		s[b] = s[c];
		s[c] = position;
		c--;
		b++;
	}
}
