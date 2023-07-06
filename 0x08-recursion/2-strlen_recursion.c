#include "main.h"

/**
 * _strlen_recursion - The length of the string to calculate
 * @a: String to count
 *
 * Return: Integer value
 */
int _strlen_recursion(char *a)
{
	if (*a == '\0')
	{
		return (0);
	}

	a++;
	return (_strlen_recursion(s) + 1);
}
