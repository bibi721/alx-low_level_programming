#include "main.h"

/**
 * _strpbrk  - Locates a character in a string
 * @s: string input
 * @accept: set of bytes
 * Return: s and null based on condition
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
