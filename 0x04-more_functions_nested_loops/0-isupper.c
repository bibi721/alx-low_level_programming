#include "main.h"

/**
 * _isupper - this code do if c upercase or not
 * @c: input value
 * Return: 0 and 1.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
