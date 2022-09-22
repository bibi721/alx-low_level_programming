include "main.h"
/**
 * _strcmp - Compare pointers
 * @s1: A pointer to be compared
 * @s2: a pointer to be compared
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	inx x;

	x = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 > *s2)
			return (1);
		else if (*s1 < *s2)
			return (-1);

		s1++;
		s2++;
		x++;

	}
	if (s[x] == '\0' && s2[x] != '\0')
		return (-1);
	else if (s2[x] == '\0' && s1[x] != '\0')
		return (1);
	else
		return (0);
}
