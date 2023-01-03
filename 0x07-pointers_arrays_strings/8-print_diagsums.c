#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - suma the diagonals of a square matrix
 * @a: square matrix
 * @size: size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	unsigned int x, y, sum1 = 0, sum2 = 0;

	for (x = 0, y = size - 1; x < (size * size); x += size + 1, y += size - 1)
	{
		sum1 += a[x];
		sum2 += a[y];
	}

	printf("%i, %i\n", sum1, sum2);
}
