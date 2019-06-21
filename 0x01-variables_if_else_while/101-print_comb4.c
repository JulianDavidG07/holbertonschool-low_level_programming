#include <stdio.h>
/**
 * main - main block
 * Description: Print0_99.
 * Return: 0
 */
int main(void)
{
  int a;
  int b;
  int c;

  for (a = 0; a < 3; a++)
    {
      for (b = 0; b < 3; b++)
	{
	  for (c = 0; c < 3; c++)
	    {
  
      if (a != b && b != c && c && a)
	{
	  putchar(a + '0');
	  putchar(b + '1');
	  putchar(c + '2');
	  putchar(',');
	  putchar(' ');
	}
	}
	}
    }
  putchar('\n');
  return (0);
}
