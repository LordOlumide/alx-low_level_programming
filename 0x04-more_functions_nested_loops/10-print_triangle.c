#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int width, a, b;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (width = 1; width <= size; width++)
		{
			a = size - width;
			while (a > 0)
			{
				_putchar(32);
				a--;
			}
			for (b = width; b > 0; b--)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
