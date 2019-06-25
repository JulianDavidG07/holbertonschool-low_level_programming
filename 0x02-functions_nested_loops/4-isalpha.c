#include "holberton.h"
/**
 * _isalpha - function to return
 * @c: variable
 * Return: 1 for success
 * struct _isalpha - check
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar(10);
}
