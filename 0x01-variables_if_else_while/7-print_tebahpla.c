#include <stdio.h>

/**
 * main - your function starts here
 *
 * Return: Always 0(success)
 *
 */
int main(void)
{
	int rv;

	for (rv = 122; rv >= 97; rv--)
	{
		putchar(rv);
	}
	putchar('\n');
	return (0);
}
