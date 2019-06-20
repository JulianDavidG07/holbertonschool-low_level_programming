#include <stdio.h>
/**
 * main - lastdigit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int alphabet = 'a';
int mayalpha = 'A';
while (alphabet <= 'z')
{
putchar (alphabet);
alphabet++;
}
while (mayalpha <= 'Z')
{
putchar (mayalpha);
mayalpha++;
}
putchar ('\n');
return (0);
}
