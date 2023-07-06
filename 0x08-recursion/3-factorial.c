#include "main.h"

/**
 * factorial - The factorial of numbers is calculated
 * @a: Number to calculate the factorial
 *
 * Return: integer value
 */
int factorial(int a)
{
	if (a < 0)
		return (-1);

	if (a <= 1)
		return (1);
	return (a * factorial(a - 1));
}
