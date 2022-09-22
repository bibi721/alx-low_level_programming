include "main.h"
/**
 * _strcmp - Compare pointers
 * @s1: A pointer to be compared
 * @s2: a pointer to be compared
 * Return: dest
 */
int _strcmp(char *s1, char *s)
{
	char *n = s1;
	char *e = s2;

	while (*n != '\0' && *e != '\0' && *n == *e)
	{
		n++;
		e++;
	}
	return (*n - *e);

}
