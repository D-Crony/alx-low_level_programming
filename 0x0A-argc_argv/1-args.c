#include "main.h"
#include <stdio.h>

/**
 * main - The number of args to print
 * @argv: Vector argument
 * @argc: Count argument
 *
 * Return: 0(Always)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
