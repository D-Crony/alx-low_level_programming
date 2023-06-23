#include <stdio.h>
#include <math.h>

/**
 * main - print the largest number of 612652475243
 *
 * Return: Always 0.
 */

int main(void)
{
	long a, naxf;
	long number = 612852475243;
	double square = sqrt(number);

	for (a = 1; a <= square; a++)
	{
	if (number % a  == 0)
	{
	naxf = number / a;
	}
	}
	printf("%ld\n", naxf);
	return (0);
}
