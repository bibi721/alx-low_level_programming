#include "main.h"
#include <stdio.h>
/**
 * print_array - n elements of an array of integers
 *@a: integer pointer
 * @n: int integer
 */

void print_array(int *a, int n)
{
	int d = 0;

	while (n-- > 0)
	{
		printf("%d", a[d++]);
		if (n != 0)
			printf(", ");
	}

	printf("\n");

}

