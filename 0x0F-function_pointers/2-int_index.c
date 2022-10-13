#include "function_pointers.h"

/**
 * int_index - searcher
 * @array: array
 * @size: size
 * @cmp: compare values
 * Return: 0 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int in;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (in = 0; in < size; in++)
	{
		if (cmp(array[in]) != 0)
			return (in);
	}
	return (-1);
}
