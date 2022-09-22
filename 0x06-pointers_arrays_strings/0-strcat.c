#include "main.h"
#include "string.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: this is the first string input
 * @src: this is the other string input
 * Return: returns pointer
 */
char *_strcat(char *dest, char *src)
{
	 int length = 0;

	 while (dest[length])
	 {
		 length++;
	 }
	 char* ptr = dest + length;

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}
