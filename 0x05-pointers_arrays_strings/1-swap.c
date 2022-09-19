#include "main.h"
/**
 * swap_int - swaping values of two variables
 * @a,b: input values
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int f;

	f = *b;

	*b = *a;

	*a = f;
}
