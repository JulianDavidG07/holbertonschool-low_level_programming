#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - hexadecimal
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char hexa;
int nume;
for (nume = 0; nume < 10; nume++)
{
putchar(nume + '0');
}
for (hexa = 'a'; hexa < 'g'; hexa++)
{
putchar(hexa);
}
putchar('\n');
return (0);
}
