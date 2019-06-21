#include <stdio.h>
/**
 * main - main block
 * Description: Print0_99.
 * Return: 0
 */
int main(void)
{
int number;
int b;
int c;

for (number = 0; number < 100; number++)
{
b = number / 10;
c = number % 10;
putchar(b + '0');
putchar(c + '0');
if (number < 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
