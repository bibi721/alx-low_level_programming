#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - pointer to allocated space in memory
 * @str: - copied string
 * Return: NULL or ptr
 */
char *_strdup(char *str)
{
	char *ptr;
	int in, size = 0;

	if (str == NULL)
		return (NULL);

	for (in = 0; str[in]; in++)
	{
		size++;
	}

	ptr = malloc(sizeof(char) * (size + 1));

	if (ptr == NULL)
		return (NULL);

	for (in = 0; str[in]; in++)
	{
		ptr[in] = str[in];

	}

	ptr[size] = '\0';

	return (ptr);

}
