#include "main.h"
/**
 * swap_int - swaping values of two variables
 * @a,b: input values
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int d, f, tmp;

	d = &a;

	f = &b;
	tmp = *b;

	*b = *a;
	*a = tmp;
}
