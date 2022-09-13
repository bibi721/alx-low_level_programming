#include <stdio.h>

/**
 * main - your function starts here
 *
 * Return: Always 0(success)
 *
 */
int main(void)
{
	int numz;

	for (numz = 0; numz <= 9; numz++)
	{
		putchar((numz % 10) + '0');
	}
	putchar('\n');
	return (0);
}
