#include "main.h"
/**
 * factorial - wow factorial func using recursion mechanism
 * @n: a number that we find factorial for
 * Return: value factorial
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	return (n * factorial(n-1));
	n--;
}
