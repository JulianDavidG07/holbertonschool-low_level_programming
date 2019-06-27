#include "stdio.h"

/**
 * main - sum the even  numbers  below
 * 4000000 in  fibobnachi sequence
 * Description: fibobnachi numbers starting from one
 * Return: 0
 */

int main(void)
{
	long int f1  = 0;
	long int f2  = 0;
	long int f3 = 1;
	long int sum = 0;

	while (f2 < 4000000)
	{
		f2 = f1 + f3;
		f1 = f3;
		f3 = f2;
		if (f2 % 2 == 0)
		{
			sum  = sum  + f2;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
