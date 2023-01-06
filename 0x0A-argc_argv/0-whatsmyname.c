#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: no. of arguments passed to main
 * @argv: Vector of string arguments passed to main
 * Description: THis program prints its name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s", argv[0]);
	return (0);
}
