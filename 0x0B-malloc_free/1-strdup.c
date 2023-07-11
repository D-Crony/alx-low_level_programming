#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A string is double
 * @str: String to double
 *
 * Return: The  string doubled
 */
char *_strdup(char *str)
{
	int x = 0, y = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[y])
	{
		y++;
	}

	s = malloc((sizeof(char) * y) + 1);

	if (s == NULL)
		return (NULL);

	while (x < y)
	{
		s[x] = str[x];
		x++;
	}

	s[x] = '\0';
	return (s);
}
