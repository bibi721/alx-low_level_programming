#include "main.h"
/**
 * print_rev - reverse string
 * @s: string pointer
 * Return: null
 */
void print_rev(char *s)
{
	int m;

	while (s[m])
	{
		m++;
	}
	while (m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
