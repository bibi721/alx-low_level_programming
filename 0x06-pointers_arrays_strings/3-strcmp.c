include "main.h"
/**
 * _strcmp - Compare two strings
 * @s1: a string 1
 * @s2: a string 2
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	char *k1 = s1;
	char *k2 = s2;

	while (*k1 != '\0' && *k2 != '\0'' && *k1 == *k2)
	{
		k1++;
		k2++;
	}
	
	return (*k1 - *k2);
}
