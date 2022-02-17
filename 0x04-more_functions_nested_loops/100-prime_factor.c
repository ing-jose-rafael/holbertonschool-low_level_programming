#include <stdio.h>
#include <math.h>
/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */
int main(void)
{
long i, numbre = 1231952;

for (i = 2; i < sqrt(numbre); i++)
{
while ((numbre % i) == 0)
numbre /= i;
}
printf("%ld\n", numbre);
return (0);
}
