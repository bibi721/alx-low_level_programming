#include "main.h"
/**
 * _memcpy -  function that copies memory area
 * @dest: - final memory address
 * @src: - intial memory area
 * @n: - n bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
	{
		dest[q] = src[q];
	}
	return (dest);
}
