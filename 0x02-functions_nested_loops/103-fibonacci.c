#include <stdio.h>

/**
 * main - Entry point
 * Description: 'fib'
 * Return: 0
 */

int main(void)
{
	int a, b, c, i, total;

	a = 1;
	b = 2;
	total = 0;

	total += 2;

	for (i = 0; i < 34; i++)
	{
		c = a + b;
		if (c % 2 == 0 && c <= 4000000)
		{
			total += c;
		}
		a = b;
		b = c;
	}
	printf("%d", total);

	return (0);
}
