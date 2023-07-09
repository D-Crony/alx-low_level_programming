#include "main.h"

/**
 * _puts - Printing of a string to stdout by the programm
 * @str: String to print
 * new line is print by _putchar
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
