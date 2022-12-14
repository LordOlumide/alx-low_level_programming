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

	printf("%llu, %llu", a, b);

	for (i = 0; i < 96; i++)
	{
		c = a + b;
		printf(", %llu", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
