#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all the arguments passed into it
 * @argc: no
 * @argv: 2d array
 * Return: 0;
 */

int main(int argc, char **argv)
{
	int n;

	for (n = 0; n < argc; n++)
		printf("%s\n", argv[n]);

	return (0);
}
