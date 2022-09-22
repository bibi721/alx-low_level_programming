#include "main.h"
/**
 * reverse_array - reverse array content
 * @a: an array of integers
 * @a: an array of integers
 * Return: no value
 */
void reverse_array(int *a, int n)
{
	int l;
	int m;
	int t;

	int l = 0;
	int m = n - 1;

	while (l < m)
	{
		t = a[l];
		a[l] = a[m];
		a[m] = t;
		l++;
		m++;
	}
}
