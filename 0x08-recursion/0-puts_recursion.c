#include "main.h"

/**
 * _puts_recursion - Print a string and a new line
 * @s: The string to print
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	-puts_recursion(s);
}
