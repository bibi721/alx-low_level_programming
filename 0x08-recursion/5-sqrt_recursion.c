#include "main.h"
int natural_square(int k, int s);
int _sqrt_recursion(int n);

/**
 * natural_square -whether natural sqr or not
 * @k: root integer
 * @s: the root
 * Return: the square root
 */
int natural_square(int k, int s)
{
	if ((s * s) == k)
		return (s);
	if (s == k / 2)
		return (-1);

	return (natural_square(k, s + 1));
}

/**
 * _sqrt_recursion - natural square root
 * @n: integer number
 * Return: _sqrt_recursion
 */
int _sqrt_recursion(int n)
{
	int s = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (natural_square(n, s));
}
