#include "main.h"

/**
 * rev_string - reverse string
 * @s: string pointer
 * Return: nothing
 */
void rev_string(char *s)
{
	char *val = s;

	char v[700];

	int d;

	while (*s != '\0')
	{
		v[d] = *s;
		s++;
		d++;

	}

	d = 0;


	while (s > val)
	{
		s--;
		*s = v[d];
		d++;
	}
}
