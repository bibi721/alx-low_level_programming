#include "function_pointers.h"

/**
 * print_name - output name
 * @name: name
 * @f: a function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);

}
