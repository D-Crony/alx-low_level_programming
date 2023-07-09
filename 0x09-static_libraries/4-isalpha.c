#include "main.h"
/**
 * _isalpha - Alphabetic characters are checked by programm
 * @c: Character check
 * Return: when c is a letter its 1, and its 0 if c is not a letter
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z' || (c >= 'A' && c <= 'Z')));
}
