#include "main.h"
#include <stdlib.h>

/**
 * array_range - array of integers min - max
 * @min: first value of the arr
 * @max: last value of the arr
 * Return: NULL or pointer
 */

int *array_range(int min, int max)
{
	int *arr, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		arr[index] = min++;

	return (arr);

}
