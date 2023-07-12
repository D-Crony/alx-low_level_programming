#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Link two string of any size
 * @s1: First string to link
 * @s2: Second string to link
 *
 * Return: Two string to link
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0, a = 0, b = 0, c = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[x])
		x++;

	while (s2[a])
		a++;

	c = x + a;
	s = malloc((sizeof(char) * c) + 1);

	if (s == NULL)
		return (NULL);

	a = 0;

	while (b < c)
	{
		if (b <= c)
		{
			s[b] = s1[a];
			a++;
		}

		b++;
	}

	s[b] = '\0';
	return (s);
}

