#include "main.h"
/**
 * _strchr - The entry point for the programm
 * @c: take in value
 * @s: take in value
 * Return: 0 success
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
