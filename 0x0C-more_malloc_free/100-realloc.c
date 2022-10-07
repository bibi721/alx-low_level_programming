#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: NULL or pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *var1, *var2;
	unsigned int in;

	if (ptr != NULL)
		var1 = ptr;

	else
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}

	var2 = malloc(new_size);

	if (var2 == NULL)
		return (0);
	for (in = 0; in < (old_size || in < new_size); in++)
	{
		*(var2 + in) = var1[in];
	}
	free(ptr);
	return (var2);
}
