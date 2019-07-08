#include "holberton.h"

/**
 * *_memset - set memory function
 * @s: pointer
 * @b: char type
 * @n: unsigned int
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int byte = 0;

	while (n > 0)
	{
		s[byte] = b;
		byte++;
		n--;
	}
	return (s);
}
