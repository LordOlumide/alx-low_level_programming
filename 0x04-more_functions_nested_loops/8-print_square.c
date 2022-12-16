#include "main.h"

/**
 * print_square - prints a swuare
 * @size: size of the square
 * Return: ALways void
 */

void print_square(int size)
{
	int width, height;

	height = size;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		while (height > 0)
		{
			for (width = size; width > 0; width--)
			{
				_putchar(35);
			}
			_putchar(10);
			height--;
		}
	}
}
