#include "holberton.h"
/**
 * _abs - convert positive number
 * Return: Absolute value
 * @absolute: variable
 */
int _abs(int absolute)
{
	if (absolute >= 0)
	{
		return (absolute);
	}
	else
	{
		return (absolute * -1);
	}
}
