#include "main.h"
/**
 * _memcpy - memory area is copied by a function
 * @src: memory copied
 * @dest: memory stored
 * @n: Bytes in numbers
 *
 * Return: Byte changed witha copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
