#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
int i;
i = 98;
positive_or_negative(i);
return (0);
}
