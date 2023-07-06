#include "main.h"

/**
 * _strlen_recursion - The length of the string to calculate
 * @s: String to be measured
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++
		longit += _strlen_recursion(s + 1)
	}

	return (longit)
}
