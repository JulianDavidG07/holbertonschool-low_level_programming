#include <stdio.h>
/**
 * main - number00-99
 * Return: Returns 0
 */
int main(void)
{
int digit1;
int digit2;
digit1 = '0';
digit2 = '0';
while (digit1 <= '9')
{
while (digit2 <= '9')
{
putchar(digit1);
putchar(digit2);
if (digit1 != '9' || digit2 != '9')
{
putchar(',');
putchar(' ');
}
digit2++;
}
digit2 = '0';
digit1++;
}
putchar('\n');
return (0);
}
