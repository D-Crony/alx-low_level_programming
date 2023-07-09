#include "main.h"

/**
 * _isdigit - Digit check
 * @c: check for int
 * Return: when c is a digit its 1 and 0 when not
 */
int _isdigit(int c)
{
	return (c <= '9' && c >= '0');
}
