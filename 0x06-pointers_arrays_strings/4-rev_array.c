#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: array to reverse
 * @n: number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int c[n];

	for (i = 0; i < n; i++)
		c[i] = a[n - i];

	for (i = 0; i < n; i++)
		a[i] = c[n - i];
}
