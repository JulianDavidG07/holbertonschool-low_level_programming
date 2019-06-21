#include <stdio.h>
/**
 * main cominations of 3 digits.
 * Return: 0
 */
int main(void)
{
int digit1, digit2, digit3, digit4;
for (digit1 = 0; digit1 < 1000; digit1++)
{
digit2 = digit1 / 100;
digit3 = (digit1 / 10) % 10;
digit4 = digit1 % 10;

if (digit2 < digit3 && digit3 < digit4)
{
putchar(digit2 + '0');
putchar(digit3 + '0');
putchar(digit4 + '0');

if (digit1 < 700)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
