#include "main.h"
/**
 * print_sign-classifies number as negative postive and zero
 * @n: single letter input
 *
 * Return: Always 0 and 1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);
	}
}
