#include <unistd.h>

/**
 * putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return: On success to 1
 * On error, -1 is return, and errno is set apropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
