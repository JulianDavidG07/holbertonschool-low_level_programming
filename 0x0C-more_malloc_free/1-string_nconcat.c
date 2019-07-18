#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of the second string
 *
 * Return: a pointer to success, NULL if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k;
	char *p;

	if (!s1)
		i = 0;
	else
		while (s1[i])
			i++;

	if (!s2)
		j = 0;
	else
		while (s2[j])
			j++;
	if (j > n)
		j = n;

	p = malloc(i + j + 1);
	if (!p)
		return (NULL);

	for (k = 0; k < i; k++)
		p[k] = s1[k];

	for (k = 0; k < j; k++)
		p[k + i] = s2[k];

	p[k + i] = 0;

	return (p);
}
