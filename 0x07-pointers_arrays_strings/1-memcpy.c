#include "holberton.h"

/**
 * *_memcpy - copy into memory location
 * @dest: char type pointer to destination array
 * @src: char type pointer to source array
 * @n: unsigned int type
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int byte;

	for (byte = 0; n > 0; byte++)
	{
		dest[byte] = src[byte];
		n--;
	}
	return (dest);
}
