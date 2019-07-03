#include "holberton.h"

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
	}
}
