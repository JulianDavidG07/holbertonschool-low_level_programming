#include "holberton.h"

/**
 * _strspn - function to find size of array containing words
 * @s: pointer array to be searched
 * @accept: pointer array with char to be searched
 * Return: length of characters found
 */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (s[a] != accept[b])
			break;
		a++;
	}
	return (a);
}
