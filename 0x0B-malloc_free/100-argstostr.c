#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concats the args of the program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: char *
 */

char *argstostr(int ac, char **av)
{
	int i, j, count = 0, k;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			count++;
			j++;
		}
		count++;
	}
	count++;

	str = malloc(count * sizeof(char));

	k = 0;
	for (i = i; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != "\0")
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
