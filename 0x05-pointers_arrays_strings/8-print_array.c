#include "main.h"

/**
 * print_array - print the elements in an array
 * @a: array to print
 * @n: no. of elements to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
