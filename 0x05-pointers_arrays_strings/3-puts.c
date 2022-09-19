#include "main.h"
/**
 * _puts - print string to stdout
 * @str: string
 * Return: null
 */
void _puts(char *str)
{
	str[20] = 'Hello';

	_putchar("%s", &str);

}
