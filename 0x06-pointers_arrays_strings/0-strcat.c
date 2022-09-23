#include "main.h"
#include <string.h>
/**
 * _strcat - a function that concatenates two strings.
 * @dest: this is the first string input
 * @src: this is the other string input
 * Return: returns pointer
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
