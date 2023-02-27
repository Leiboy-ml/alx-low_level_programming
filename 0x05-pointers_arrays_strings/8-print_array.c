#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array
 * @a: The array in question
 * @n: Number of elements to print
 */

void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < n; d++)
	{
		if (d < (n - 1))
		{
			printf("%d, ", *a);
		}
		else if (d == (n - 1))
		{
			printf("%d", *a);
		}
		a++;
	}
	printf("\n");
}
