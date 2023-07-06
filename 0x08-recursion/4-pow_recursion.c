#include "main.h"

/**
 * _pow_recursion - Value of a raised to the power of b
 * @a: Value to multiply
 * @b: Times to multiply the value
 *
 * Return: Value multiply b times
 */
int _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);

	if (b == 0)
		return (1);

	return (a * _pow_recursion(a, b - 1));
}
