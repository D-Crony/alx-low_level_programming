#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the number 1 - 100w/
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
	if ((a % 3 == 0) && (a % 5 == 0))
	{
	printf("fizzBuzz");
	}
	else if (a % 3 == 0)
	{
	printf("fizz");
	}
	else if (a % 5 == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", a);
	}
	if (a != 100)
	{
	printf(" ");
	}
	}
	printf("\n");
	return (0);
}
