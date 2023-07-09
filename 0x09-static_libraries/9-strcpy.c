#include "main.h"
/**
 * char *_strcpy - The string pointers are copied by the program
 * @src: copying from
 * @dest: copying to
 * Return: Value of string
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for ( ; y < x ; y++)
	{
		dest[y] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
