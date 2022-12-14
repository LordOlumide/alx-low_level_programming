#include <stdio.h>

/**
 * main - Entry point
 * Description: 'print first 98 fib nums'
 * Return: 0
 */

int main(void)
{
	unsigned long long int a, b, c;
	int i;

	a = 1;
	b = 2;

	printf("%lu, %lu", a, b);

	for (i = 0; i < 96; i++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
