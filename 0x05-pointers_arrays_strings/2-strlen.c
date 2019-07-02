#include "holberton.h"

/**
 * int _strlen - function that returns the length of a string.
 * @s: variable
 * Return:
 */

int _strlen(char *s)
{
	int a = 0;

	while(*s != '\0')
	{
		s++;
		a++;
	}
	return(a);
}
