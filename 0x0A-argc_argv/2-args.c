#include "main.h"
#include <stdio.h>

/**
 * main - The agrs content to print
 * @argv: Vector argument
 * @argc: Count argument
 *
 * Return:0(Alway)
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
