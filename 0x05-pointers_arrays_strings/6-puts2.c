#include "main.h"
/**
 * puts2 - even character of a string
 * @str: string pointer
 * Return: nothing
 */

void puts2(char *str)
{
	int m = 0 ;

	while (str[m] != '\0')
	{
		if (m % 2 == 0)
		{
			_putchar(str[m]);

		}

		m++;
	}
	_putchar('\n');
}
