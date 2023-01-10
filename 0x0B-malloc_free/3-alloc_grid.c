#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2d array of ints
 * @width: width
 * @height: height
 * Return: int **
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width < 1 || height < 1)
		return (NULL);

	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < height; j++)
		{
			a[i][j] = 0;
		}
	}

	return (a);
}
