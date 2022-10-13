#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings
 * @separator: The string
 * @n: number
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list an;
	char *str;
	unsigned int in;

	va_start(an, n);

	for (in = 0; in < n; in++)
	{
		str = va_arg(an, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (in != (n - 1) && separator != NULL)
			printf("%s", separator);

	}

	printf("\n");

	va_end(an);
}
