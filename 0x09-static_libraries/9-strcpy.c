#include "main.h"
/**
 * _strcpy - copied a sting
 * @dest: destnation pointer
 * @src:  string pointer
 * Return: dest from destination
 *
 */
char *_strcpy(char *dest, char *src)
{
	int z;

	z = 0;

	while (src[z] != '\0')
	{
		dest[z] = src[z];
		z++;

	}

	dest[z] = '\0';

	return (dest);

}
