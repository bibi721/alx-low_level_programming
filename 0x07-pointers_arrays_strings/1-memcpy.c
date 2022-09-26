#include "main.h"
/**
 * _memcpy -  function that copies memory area
 * @dest - final memory address
 * @src: - intial memory area
 * @n: - n bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (int i=0; i<n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
