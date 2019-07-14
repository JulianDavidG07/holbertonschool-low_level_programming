#include "holberton.h"


/**
 * _strstr - Function that return the number that coincide two strings
 * @haystack: The char to print
 * @needle: The char to print
 * Return: needle or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int con;

	while (*haystack)
	{
		for (con = 0; needle[con]; con++)
		{
			if (needle[con] != haystack[con])
				break;
		}
		if (!needle[con])
			return (haystack);
		haystack++;
	}
	return (0);
}
