#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: -input value pointer string
 * @n: - input value n bytes of memory area
 * @b: - constant byte
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		*(s + k) = b;
	}
	return (s);
}
