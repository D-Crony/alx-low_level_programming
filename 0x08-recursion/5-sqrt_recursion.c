#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Return the natural square root
 * @n: Number to calculate the square root
 *
 * Return: The resulting square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}

/**
 * _sqrt - calculate natural square root
 * @n: number to calculate the square
 * @i: Iterator
 *
 * Return: Natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}

