#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the number 1 - 100 w/
 * Fizz for multiple of 3, Buzz for multiple of 5.
 * and fizzbuzz for multiple of both
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
		if (i % 25 == 0)
			printf("fizzbuzz");
		else if (i % 3 == 0)
			printf("fizz");
		else if (i % 5 == 0)
			printf("buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(' ')
	}
	printf('\n');
	return (0);
}




