#include "main.h"
#include "string.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: this is the first string input
 * @src: this is the other string input
 * Return: @dest
 */
char *_strcat(char *dest, char *src)
{
	int k, lengz;

	for (lengz = 0; dest[lengz] != '\0'; lengz++)
		;
	for (k = 0; src[k] != '\0'; k++)
		dest[lengz + 1] = src[k];
	dest[lengz + 1] = '\0';
	return (dest);
}
