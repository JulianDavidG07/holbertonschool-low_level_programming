#include "holberton.h"
/**
 * reverse_array - reverse the content of an array
 * @a: pointer, string to reverse
 * @n: variable of the string
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int s, d = 0;

	n = n - 1;

	while (d < n)

	{
		s = a[d];
		a[d] = a[n];
		a[n] = s;
		d++;
		n--;
	}
}
