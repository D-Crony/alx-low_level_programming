#include "main.h"
/**
 * _memset - Block of memory filled with specified value
 * @n: amount of byte to change
 * @b: Desired value
 * @s: Address of memory
 *
 * Return: Arrays are change with new values of n byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	int y = 0;

	for (; n > 0; y++)
	{
		s[y] = b;
		n--;
	}
	return (s);
}
