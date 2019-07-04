#include "holberton.h"
<<<<<<< HEAD
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
=======

/**
 * rev_string - reverse a string not print
 * @s: string to reverse
 * Return: noting
 */

void rev_string(char *s)
{
	int l, i, Ls = 0;
	char *ini_ptr, *end_ptr, c;

	while (*(s + Ls) != '\0')
		Ls++;
	l = Ls;
	ini_ptr = s;
	end_ptr = s;

	for (i = 0; i < l - 1; i++)
	{
		end_ptr++;
	}

	for (i = 0; i < l / 2; i++)
	{
		c = *end_ptr;
		*end_ptr = *ini_ptr;
		*ini_ptr = c;
		ini_ptr++;
		end_ptr--;
>>>>>>> e54a866672ba59242888fa1fb459c3ad23f6b72e
	}
}
