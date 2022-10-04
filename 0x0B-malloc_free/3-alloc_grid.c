#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: NULL or in
 */
int **alloc_grid(int width, int height)
{
	int **in;
	int  m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	in = malloc(sizeof(int *) * height);

	if (in == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		in[m] = malloc(sizeof(int) * width);

		if (in[m] == NULL)
		{
			for (; m >= 0; m--)
				free(in[m]);

			free(in);
			return (NULL);

		}

	}

	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
		{
			in[m][n] = 0;

		}
	}
	return (in);

}
