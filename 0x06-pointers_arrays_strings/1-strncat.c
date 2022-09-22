#include "main.h"
/**
 * _strncat - this concatenates two string using with n bytes
 * @dest: destination
 * @src: source string
 * @n: n byytes
 * Return: dest 
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, opt = 0;

	while (dest[x++])
		opt++;
	for (x = 0; src[x] && x < n; x++)
		dest[opt++] = src[x];
	return (dest);
}
