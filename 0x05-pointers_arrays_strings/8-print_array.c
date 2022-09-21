#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an inputted number of elements of an array of integers
 * @a: array of integers
 * @n: number of elements to be printed.
 */
void print_array(int *a, int n)
{
	       int s;

	for (s = 0; s < n; s++)
	{
		printf("%d", a[s]);

		if (s != n - 1)

		printf(", ");


	}
	_putchar('\n');
}
