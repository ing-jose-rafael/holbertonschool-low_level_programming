#include "main.h"
/**
 * print_line - Entry point
 *
 * @n: int
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
if (n <= 0)
_putchar('\n');
else
{
_putchar('_');
print_line(n - 1);
}
}
