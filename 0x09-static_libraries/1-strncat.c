#include "main.h"
/**
 * _strncat - The function link two strings using
 * n byte from src at most
 * @src: Values are entered
 * @dest: Values are entered
 * @n: Values are entered
 *
 * Returned: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
	dest[x] = src[y];
	x++;
	y++;
	}
	dest[x] = '\0';
	return (dest);
}
