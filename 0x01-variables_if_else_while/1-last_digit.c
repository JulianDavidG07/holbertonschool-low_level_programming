#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - lastdigit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int ultdig;

srand(time(0));
n = rand() - RAND_MAX / 2;
ultdig = n % 10;
if (ultdig > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, ultdig);
}
else if (ultdig == 0)
{
printf("Last digit of %d is %d and is 0\n", n, ultdig);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ultdig);
}
return (0);
}
