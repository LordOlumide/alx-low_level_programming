#include <stdio.h>

/**
 * main - Entry point
 * Description: FizzBuzz
 * Return: 0(Success)
 */

int main(void)
{
	int min;

	for (min = 1; min <= 100; min++)
	{
		if ((min % 3 == 0) && (min % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (min % 3 == 0)
		{
			printf("Fizz");
		}
		else if (min % 5 == 0)
		{
			printf("Buzz");
		}
		else
			printf("%d", min);

		if (min != 100)
			putchar(32);
	}
	putchar(10);

	return (0);
}
