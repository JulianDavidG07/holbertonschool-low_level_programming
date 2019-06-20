#include <stdio.h>
/**
 * main - inversealpha
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int alphabet = 'z';
while (alphabet >= 'a')
{
putchar (alphabet);
alphabet--;
}
putchar ('\n');
return (0);
}
