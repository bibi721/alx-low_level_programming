#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL or 0
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int in, cat1 = 0, cat2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (in = 0; s1[in] || s2[in]; in++)
		cat2++;

	ptr = malloc(sizeof(char) * cat2);

	if (ptr == NULL)
		return (NULL);

	for (in = 0; s1[in]; in++)
		ptr[cat1++] = s1[in];

	for (in = 0; s2[in]; in++)
		ptr[cat1++] = s2[in];

	return (ptr);

}
