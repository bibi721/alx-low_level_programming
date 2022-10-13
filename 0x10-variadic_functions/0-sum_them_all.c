#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum
 * @n: number
 * Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nm1;
	unsigned int  in, sum = 0;

	va_start(nm1, n);

	for (in = 0; in < n; in++)
	{
		sum += va_arg(nm1, int);
	}

	va_end(nm1);

	return (sum);

}
