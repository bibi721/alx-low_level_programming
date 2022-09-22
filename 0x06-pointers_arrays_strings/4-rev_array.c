#include "main.h"
/**
 * reverse_array - reverse array
 * @a: array of integer
 * @n: the number of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int d;
	int r;
	int c;

	d = 0;

	r = n - 1;

	while (!(d >= r))
	{
		c = a[d];
		a[d] = a[r];
		a[r] = c;
		d++;
		r--;

	}

}
