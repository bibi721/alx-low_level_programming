#include "main.h"
#include <stdlib.h>
/**
 * create_array -  creates an array of chars
 * @size: the size of array
 * @c: char
 * Return: NULL or 0
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int in;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (in = 0; in < size; in++)
		arr[in] = c;

	return (arr);

}
