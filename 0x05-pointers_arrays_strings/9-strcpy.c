#include "holberton.h"

/**
 * _strcpy - function to copy string from source to destination
 * @dest: pointer to destinatioin of string to be copied
 * @src: pointer to source of string to be copied
 * Return: return the value at dest
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
