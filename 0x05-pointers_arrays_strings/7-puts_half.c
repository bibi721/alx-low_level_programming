#include "main.h"
/**
 * puts_half - half of an input string
 * @s: string pointer
 * Return: nothing 
 */
void puts_half(char *str)
{
	int m = 0;
	int val;

	while (s[m] != '\0')
	{
		m++;
	}

	val = (m + 1) / 2;

	for (m = val; str[m]; m++)
		_putchar(str[m]);

	_putchar ('\n');

}
