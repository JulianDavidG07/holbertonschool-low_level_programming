#include <stdio.h>
/**
 * main - combination3numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number1, number2, number3;
for (number1 = 48; number1 <= 57; number1++)
{
for (number2 = 48; number2 <= 57; number2++)
{
for (number3 = 48; number3 <= 57; number3++)
{
if ((number1 < number2) && (number2 < number3) && (number1 < number3))
{
putchar (number1);
putchar (number2);
putchar (number3);
if ((number1 != 55) || (number2 != 56) || (number3 != 57))
{
putchar (44);
putchar (' ');
}
}
}
}
}
putchar ('\n');
return (0);
}
