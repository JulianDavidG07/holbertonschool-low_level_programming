#include "holberton.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: variable
 * Return: size string
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		s++;
		a++;
	}
	return (a);
}
