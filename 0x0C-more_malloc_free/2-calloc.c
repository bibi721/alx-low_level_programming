#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: The number of elements
 * @size: The byte size of each array elemen
 * Return: NULL or pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memr;
	char *adder;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memr = malloc(size * nmemb);

	if (memr == NULL)
		return (NULL);

	adder = memr;

	for (index = 0; index < (size * nmemb); index++)
		adder[index] = '\0';

	return (memr);

}
