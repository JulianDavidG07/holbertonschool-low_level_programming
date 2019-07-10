#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string
 * Return: length string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return(0);
	}

	return(_strlen_recursion(s + 1) + 1);
}
