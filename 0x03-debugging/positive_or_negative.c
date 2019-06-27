#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * if  and else if statatements
 *
 * Return: Void
 */
void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);

	else if (i < 0)
		printf("%d is negative\n", i);

	else if (i == 0)
		printf("%d is zero\n", i);

}
