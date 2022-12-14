#include <stdio.h>

/**
 * main - Entry point
 * Description: 'print first 98 fib nums'
 * Return: 0
 */

int main(void)
{
	int a, b, c, i;

	a = 1;
	b = 2;

	printf("%d, %d", a, b);

	for (i = 0; i < 96; i++)
	{
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
