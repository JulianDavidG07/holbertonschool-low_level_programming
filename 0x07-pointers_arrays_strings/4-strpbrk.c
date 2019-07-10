#include "holberton.h"

/**
 * _strpbrk - function locates the first occurrence in the string s
 * @s: string
 * @accept: char
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int cont = 0;

	while (s[cont])
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[cont] == accept[i])
			{
				return (s + cont);
			}
		}
		cont++;
	}
	return (0);
}
