#include "main.h"
/**
 * *_strcat - a function that concatenates two strings.
 * @dest: this is the first string input
 * @src: this is the other string input
 * Return: returns pointer
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest + strlen(dest);

	while (*source != '\0')
	{
		*ptr++ = *source++;
	}
	*ptr = '\0';

	return (dest);
}
