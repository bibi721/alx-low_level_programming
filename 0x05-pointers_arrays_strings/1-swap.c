#include "main.h"
/**
 * swap_int - swaping values of two variables
 * @a: input value 1
 * @b: input value 2
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int f;

	f = *b;

	*b = *a;

	*a = f;
}
