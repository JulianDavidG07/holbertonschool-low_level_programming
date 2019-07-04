#include "holberton.h"
/**
 * _strncat - Write a function that concatenates two strings
 * @dest: string
 * @src: string
 * @n: integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)

{
	int d = 0;

		while (*(dest + n))
			n++;
	while (*(src + d))
	{
		dest[n] = src[d];
		d--;
		n++;
	}
	dest[n] = 0;
	return (dest);
}
