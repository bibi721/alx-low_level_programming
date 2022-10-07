#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes for allocation
 * Return: A pointe
 */

void *malloc_checked(unsigned int b)
{
	void *pntr = malloc(b);

	if (pntr == NULL)
	{
		exit(98);
	}

	return (pntr);

}

