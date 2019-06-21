#include <stdio.h>
/**
 * main - combination
 * Return: 0
 */
int main(void)
{
int num1, num2, num3, num4;
for (num1 = 0; num1 < 1000; num1++)
{
num2 = num1 / 100;
num3 = (num1 / 10) % 10; 
num4 = num1 % 10; 
if (num2 < num3 && num3 < num4)
{
putchar(num2 + '0');
putchar(num3 + '0');
putchar(num4 + '0');
if (num1 < 700)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
