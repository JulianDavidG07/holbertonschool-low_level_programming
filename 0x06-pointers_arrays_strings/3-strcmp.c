#include "holberton.h"
/**
 * _strcmp - int _strcmp(char *s1, char *s2)
 * @s1: char
 * @s2: char
 * Return: succes 0
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0')
	{
		return (s1[a] - s2[a]);
	}
	while (s2[a] != '\0')
	{
		return (s2[a] - s1[a]);
	}

	if (s1[a] != s2[a])
	{
		return (s1[a] - s2[a]);
	}
	return (0);
}
