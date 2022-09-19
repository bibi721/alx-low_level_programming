#include "main.h"
/**
 * _strlen - find the length of characters in a string
 * @s: input value c
 * Return: returns lnth.
 */
int _strlen(char *s)
{
	int lnth = 0;

	while (s[lnth] != '\0')
	{
		lnth++;
	}
	return (lnth);
}
