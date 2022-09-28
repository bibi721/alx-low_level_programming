#include "main.h"
/**
 * _pow_recursion - function to find power of x raised y
 * @x: base integer
 * @y: power
 * Return: value
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (x);

	return (x * _pow_recursion(int x, int y));
	y--;
}
