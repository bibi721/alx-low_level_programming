#include "main.h"
/**
 * _pow_recursion - function to find power of x raised y
 * @x: base integer
 * @y: power
 * Return: value
 */
int _pow_recursion(int x, int y)
{
	int pow = x;

	if (y == 0)
		return (1);

	else if (y < 0)
		return (-1);

	return (pow * _pow_recursion(x,  y - 1));
}
