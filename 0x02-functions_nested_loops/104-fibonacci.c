#include <stdio.h>

unsigned long int fib(int j);

/**
 * main - Entry point
 * Description: 'print first 98 fib nums'
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 98; i++)
	{
		printf("%lu", fib(i));
		if (i < 97)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");

	return (0);
}

/**
 * fib - 'Fibonnaci number calculator'
 * @j: number it will calculate
 *
 * Return: fib number
 */

unsigned long int fib(int j)
{
	if (j == 0)
		return (0);
	else if (j == 1)
		return (1);
	else
		return (fib(j - 1) + fib(j - 2));
}
