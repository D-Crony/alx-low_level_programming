#include "main.h"
/**
 * _strpbrk - Entry point for program
 * @accept: Input
 * @s: Input
 * Return: 0 success
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			return (s);
		}
	s++;
	}

	return ('\0');
}

