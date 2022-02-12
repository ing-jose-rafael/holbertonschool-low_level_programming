#include <stdio.h>

/**
* main - Print the numbers of base 16 in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
		int tens;
  		int ones;

		for (tens = 0; tens <= 9; tens++)
    	{
    	  for (ones = tens + 1; ones <= 9; ones++)
		{
		putchar(tens + '0');
		putchar(ones + '0');
		if (tens < 8)
		{
	    putchar(',');
	    putchar(' ');
	    }
		}
    	}
		for (num = 0; num <= 9; num++)
		{
		putchar(num + '0');
		if (num < 9)
		{
		putchar(',');
		putchar(' ');
		}
		}
		putchar('\n');
	return (0);
}
