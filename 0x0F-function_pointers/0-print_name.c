#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Function that prints a name
 * @name: char
 * @f: Type pointer func
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(EXIT_FAILURE);
	f(name);
}
