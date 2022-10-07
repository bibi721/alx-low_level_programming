#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes
 * Return: function fails - NULL or pointer if concn
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concn;
	unsigned int ln = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		ln++;


	concn = malloc(sizeof(char) * (ln + 1));

	if (concn == NULL)
		return (NULL);

	ln = 0;

	for (index = 0; s1[index]; index++)
		concn[ln++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concn[ln++] = s2[index];

	concn[ln] = '\0';

	return (concn);

}
