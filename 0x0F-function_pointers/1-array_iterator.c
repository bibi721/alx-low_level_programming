#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter and output it
 * @array: array
 * @size: size
 * @action: executed function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;

	}

}
