#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'The program prints to the standard error'
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	char str[100] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\n", str);
	return (1);
}
