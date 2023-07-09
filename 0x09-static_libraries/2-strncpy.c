#include "main.h"
/**
 * _strncpy - A string is copied by the program
 * @src: The value is inputed
 * @dest: The value is inputed
 * @n: The value is inputed
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
