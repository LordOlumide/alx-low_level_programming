#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints argc
 * @argc: no.of args passed into main
 * @argv: vector of string args passed into main
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
