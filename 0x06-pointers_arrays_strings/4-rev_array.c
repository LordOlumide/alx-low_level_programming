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
	int c;

	for (i = n - 1; i > n / 2; i--)
	{
		c = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = c;
	}
}
