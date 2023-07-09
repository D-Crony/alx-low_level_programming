#include "main.h"
/**
 * _strlen - The length of the string is return by the program
 * @s: String
 * Return: The length
 */
int _strlen(char *s)
{
	int longx = 0;

	while (*s != '\0')
	{
		longx++;
		s++;
	}
	return (longx);
}
