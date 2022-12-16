#include <stdio.h>

/**
 * main - Entry point
 * Description: 'get the larget prime factor'
 * Return: 0(Success)
 */

int main(void)
{
	long int num, div, ans, maxFact;

	num = 612852475143;

	div = 2;
	ans = 0;
	while (n != 0)
	{
		if (n % div != 0)
		{
			div++;
		}
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%d", maxFact);
				ans = 1;
				break;
			}
		}
	}
	return (0);
}
