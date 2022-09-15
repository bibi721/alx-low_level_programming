#include "main.h"
/**
 * print_last_digit - find last digit of number
 * @val: a number that we will find last digit for
 *
 * Return: Always 0.
 */
int print_last_digit(int val)
{
	int digity = val % 10;

	if (digity < 0)
	{
		digity *= -1;
	}
	_putchar(digity + '0');

	return(digity);
}
