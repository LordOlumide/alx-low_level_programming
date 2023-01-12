#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry poin
 * @argv: argument vector
 * @argc: argument count
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num = atoi(argv[0]) * atoi(argv[1]);

	printf("%d\n", num);

	return (0);
}
