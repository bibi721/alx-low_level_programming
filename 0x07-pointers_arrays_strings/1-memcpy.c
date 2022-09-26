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
	char *c = (char *) src;

	char *d = (char *) dest;

	if ((d != NULL) && (c != NULL))
	{
		while (n)
		{
			*(d++) = *(c++);
			n--;

		}
		return (dest);
}
