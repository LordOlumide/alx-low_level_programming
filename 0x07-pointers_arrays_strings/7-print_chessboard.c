#include "main.h"

/**
 * print_chessboard - prints 8 by 8 array
 * @a: array to print
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, b;

	for (i = 0; i < 8; i++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[i][b]);
		}
		_putchar('\n');
	}
}
